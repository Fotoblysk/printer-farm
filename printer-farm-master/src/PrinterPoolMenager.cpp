//
// Created by railgunpat on 24.04.19.
//

#include "BinaryFileReader.h"
#include "DirScanner.h"
#include "PrinterFarmMaster.h"
#include "PrinterPoolMenager.h"

unsigned int PrinterPoolMenager::getPrintersNumber() {
    return currentId - static_cast<unsigned char>(static_cast<unsigned int>(PublisherFilters::MAX_RES)) - 1;
}

unsigned int PrinterPoolMenager::getNewId() {
    ++currentId;
    return currentId - 1;
}

void PrinterPoolMenager::addFreePrinter(IdType printerId) {
    avaliblePrinters.insert(printerId);
}

unsigned int PrinterPoolMenager::countFreePrinters() {
    return avaliblePrinters.size();
}

void PrinterPoolMenager::changePrinterToBusyWithJob(IdType printerId, Job job) {
    scheldudedPrintsHashmap.insert(job.path);
    scheldudedPrinterDataToJob.insert({printerId, job});
    avaliblePrinters.erase(printerId);
}

IdType PrinterPoolMenager::getFreePrinter() {
    return avaliblePrinters.begin() != avaliblePrinters.end() ? *avaliblePrinters.begin() : 0;
}

unsigned int PrinterPoolMenager::countPrintersPrinting(std::string &filePath) {
    return scheldudedPrintsHashmap.count(filePath);
}

Job PrinterPoolMenager::popJobIfFinished(PrinterData printerData) {
    auto handledPrinter = scheldudedPrinterDataToJob.find(printerData.id);
    if (handledPrinter != scheldudedPrinterDataToJob.end()) {
        auto popedJob = handledPrinter->second;
        scheldudedPrintsHashmap.erase(handledPrinter->second.path);
        scheldudedPrinterDataToJob.erase(handledPrinter->first);
        return popedJob;
    }
    return Job();
}

bool PrinterPoolMenager::wasPrintermarkedAsBusy(IdType printerId) {
    return scheldudedPrinterDataToJob.count(printerId) > 0;
}
