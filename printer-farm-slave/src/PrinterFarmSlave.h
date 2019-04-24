//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_PRINTERFARMSLAVE_H
#define PRINTER_FARM_SLAVE_PRINTERFARMSLAVE_H

#include <zmq.hpp>
#include <memory>
#include <common/utils/libs/mypbutils.h>
#include <pf_msg.pb.h>
#include "Printer.h"
#include "FakePrintStrategy.h"
#include "../common/utils/libs/zhelpers.hpp"
#include "../common/utils/libs/myzmqext.h"
#include "pf_msg.pb.h"

class PrinterFarmSlave {
    std::unique_ptr<Printer> printer;
    zmq::context_t context;
    zmq::socket_t subscriber;
    std::string subUrl;
    std::string syncUrl;
    zmq::socket_t sync;
public:
    bool shouldExit = false;

    PrinterFarmSlave();

    void connect(std::string &&subUrl_, std::string &&syncUrl_);

    std::string waitForCall();

    void clearSocket();

    void handlePingRequest();

    void handleSpecifiedPrinterRequest(std::string msgString);

    bool handleCall(std::string &msgString);

    void handlePrintReq(Job job);

};

#endif //PRINTER_FARM_SLAVE_PRINTERFARMSLAVE_H
