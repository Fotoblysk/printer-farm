//
// Created by railgunpat on 24.04.19.
//

#include <pf_msg.pb.h>
#include <common/utils/libs/mypbutils.h>
#include "PrinterFarmMaster.h"
#include "DirScanner.h"
#include "BinaryFileReader.h"
#include "PrinterPoolMenager.h"
#include <experimental/filesystem>
#include <common/utils/libs/myzmqext.h>
#include <common/utils/libs/zhelpers.hpp>

#define MAX_FREQ 100

void PrinterFarmMaster::bind() {
    sync.bind("tcp://*:5564");
    publisher.bind("tcp://*:5565");
}

void PrinterFarmMaster::run() {
    my_zmq_ext::ZmqNoblockWrapper zmqNoblockRcv(sync);
    std::string msg;
    while (!s_interrupted) {
        if (zmqNoblockRcv.s_recv_noblock()) {
            msg = zmqNoblockRcv.getData();
            pf_msg::PrinterDataMessage printerDataMessage;
            printerDataMessage.ParseFromString(msg);
            handlePrinterReq(PrinterDataPBUtils(printerDataMessage).printerData);
            zmqNoblockRcv.reset();
        }
        updatePrintRequests();
        pingPrinters();
    }
}

void PrinterFarmMaster::handlePrinterReq(PrinterData printerData) {
    std::string response = "";
    if (printerData.printerStatus == PrinterStatus::NO_ID) { // TODO change to switch
        response = sendNewId();
    } else if ((printerData.printerStatus == PrinterStatus::FINISHED ||
                printerData.printerStatus == PrinterStatus::FAILED)) {
        response = cleanAfterPrinterFinished(printerData);
    } else if (printerData.printerStatus == PrinterStatus::WAITING &&
               !printerPoolMenager.wasPrintermarkedAsBusy(printerData.id)) {
        response = addReadyPrintersToPool(printerData);
    }

    s_send(sync, response);
}

const char *PrinterFarmMaster::addReadyPrintersToPool(PrinterData printerData) {
    printerPoolMenager.addFreePrinter(printerData.id);
    return "";
}

const char *PrinterFarmMaster::cleanAfterPrinterFinished(PrinterData printerData) {
    auto lastPrinterJob = printerPoolMenager.popJobIfFinished(printerData);
    if (!lastPrinterJob.isNull() && printerData.printerStatus == PrinterStatus::FINISHED)
        std::experimental::filesystem::remove(std::experimental::filesystem::path(
                lastPrinterJob.path));// TODO handle deleting file while printing
    return "";
}

bool PrinterFarmMaster::updatePrintRequests() {
    if (printerPoolMenager.getPrintersNumber() > 0) {
        auto currentFileList = dirScanner.scanDir();
        for (auto &&file :currentFileList) {
            if (printerPoolMenager.countPrintersPrinting(file) == 0 && printerPoolMenager.countFreePrinters() > 0) {
                auto printerId = printerPoolMenager.getFreePrinter();
                auto job = newJob(file);
                s_send(publisher,
                       std::string(1, printerId) + JobMessagePBUtils(job).jobMessage.SerializeAsString());
                printerPoolMenager.changePrinterToBusyWithJob(printerId, job);
                std::cout << "Send file: " << file << "; to printer: " << static_cast<unsigned int>( printerId )
                          << std::endl;
            }
        }
    }
    return false;
}

void PrinterFarmMaster::pingPrinters() {
    if (printerPoolMenager.getPrintersNumber() > 0) {
        auto currentFileList = dirScanner.scanDir();
        for (auto &&file :currentFileList)
            if (shouldPing(file)) {
                lastPingReq = std::chrono::system_clock::now();
                s_send(publisher, std::string(1, static_cast<char>(PublisherFilters::REQUEST_ALL)));
            }
    }
}

bool
PrinterFarmMaster::shouldPing(std::basic_string<char, std::char_traits<char>, std::allocator<char>> file) {
    return printerPoolMenager.countPrintersPrinting(file) == 0 &&
           std::chrono::duration_cast<std::chrono::milliseconds>(
                   std::chrono::system_clock::now() - lastPingReq) > std::chrono::milliseconds(MAX_FREQ);
}

Job PrinterFarmMaster::newJob(std::string filePath) {
    Job newJob_;
    newJob_.path = filePath;
    newJob_.encodedFile = binaryFileReader.readBinaryFile(filePath);
    return newJob_;
}

std::basic_string<char> PrinterFarmMaster::sendNewId() {
    auto newId = printerPoolMenager.getNewId();
    std::cout << "Send id to printer: " << newId << std::endl;
    return std::string(1, newId);
}

