//
// Created by railgunpat on 24.04.19.
//

#ifndef PRINTER_FARM_MASTER_PRINTERFARMMASTER_H
#define PRINTER_FARM_MASTER_PRINTERFARMMASTER_H


#include <zmq.hpp>
#include <common/utils/types/Job.h>
#include <common/utils/types/PrinterData.h>
#include "PrinterPoolMenager.h"
#include "BinaryFileReader.h"
#include "DirScanner.h"
#include <string>

class PrinterFarmMaster {
    PrinterPoolMenager printerPoolMenager;
    BinaryFileReader binaryFileReader;
    DirScanner dirScanner;
    zmq::context_t context;
    zmq::socket_t publisher;
    zmq::socket_t sync;
    std::chrono::time_point<std::chrono::system_clock> lastPingReq;

    std::basic_string<char> sendNewId();

    Job newJob(std::string filePath);

    bool shouldPing(std::basic_string<char, std::char_traits<char>, std::allocator<char>> file);

    void pingPrinters();

    bool updatePrintRequests();

    const char * cleanAfterPrinterFinished(PrinterData printerData);

    const char * addReadyPrintersToPool(PrinterData printerData);

    void handlePrinterReq(PrinterData printerData);

public:
    PrinterFarmMaster(std::string printDir) : dirScanner(printDir), context(1), publisher(context, ZMQ_PUB),
                                                     sync(context, ZMQ_REP) {}

    void bind();

    void run();
};


#endif //PRINTER_FARM_MASTER_PRINTERFARMMASTER_H
