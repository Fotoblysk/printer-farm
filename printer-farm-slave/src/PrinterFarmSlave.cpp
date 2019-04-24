//
// Created by railgunpat on 16.04.19.
//

#include "PrinterFarmSlave.h"

PrinterFarmSlave::PrinterFarmSlave() : context(1), subscriber(context, ZMQ_SUB), sync(context, ZMQ_REQ) {
}

void PrinterFarmSlave::connect(std::string &&subUrl_, std::string &&syncUrl_) { // TODO builder !!!
    subUrl = subUrl_;
    syncUrl = syncUrl_;
    subscriber.connect(subUrl);
    sync.connect(syncUrl);
    auto tmpExitMsg(PublisherFilters::EXIT); // TODO setsockopt does not support move
    auto tmpReqPrinters(PublisherFilters::REQUEST_ALL); // TODO setsoickopt does not support move
    subscriber.setsockopt(ZMQ_SUBSCRIBE, &tmpExitMsg, 1);
    subscriber.setsockopt(ZMQ_SUBSCRIBE, &tmpReqPrinters, 1);
    s_send(sync, std::string(1, static_cast<char>(PrinterStatus::NO_ID)));
    printer = std::make_unique<Printer>(new FakePrintStrategy, s_recv(sync)[0]); //  max 254 clients
    subscriber.setsockopt(ZMQ_SUBSCRIBE, &(printer->printerData.id), 1);
    printer->printerData.printerStatus = PrinterStatus::WAITING;
    std::this_thread::sleep_for(std::chrono::seconds(1)); // this is bulshit but setsockopt is not blocking
    std::cout << "Got id from master: " << static_cast<unsigned int>(printer->printerData.id) << std::endl;
}

std::string PrinterFarmSlave::waitForCall() {
    auto exitStringMsg = std::string(1, static_cast<char>(PublisherFilters::EXIT));
    return s_recv(subscriber);
}

void PrinterFarmSlave::clearSocket() {
    my_zmq_ext::ZmqNoblockWrapper zmqNoblockRcv(subscriber);
    while (zmqNoblockRcv.s_recv_noblock()) {
        zmqNoblockRcv.reset();
    }

}

void PrinterFarmSlave::handlePingRequest() {
    s_send(sync, PrinterDataPBUtils(printer->printerData).printerDataMessage.SerializeAsString());
    s_recv(sync);
    printer->printerData.printerStatus = PrinterStatus::WAITING;
}

void PrinterFarmSlave::handleSpecifiedPrinterRequest(std::string msgString) {
    pf_msg::JobMessage jobMessage;
    jobMessage.ParseFromString(msgString);
    handlePrintReq(JobMessagePBUtils(jobMessage).job);
    printer->printerData.printerStatus = PrinterStatus::FINISHED;
    clearSocket();
    handlePingRequest();
}

bool PrinterFarmSlave::handleCall(std::string &msgString) {
    if (msgString[0] == static_cast<char>(PublisherFilters::REQUEST_ALL)) { // TODO change to switch
        msgString.erase(std::begin(msgString));
        handlePingRequest();
    } else if (msgString[0] == printer->printerData.id) {
        msgString.erase(msgString.begin());
        handleSpecifiedPrinterRequest(msgString);
    } else if (msgString[0] == static_cast<char>(PublisherFilters::EXIT) || s_interrupted) {
        shouldExit = true;
    }
    return true;
}

void PrinterFarmSlave::handlePrintReq(Job job) {
    std::hash<std::string> hashFn;
    std::cout << "Printer: " << static_cast<unsigned int>(printer->printerData.id) << " started printing; Hash: "
              << hashFn(job.encodedFile) <<
              " path: " << job.path << std::endl;
    printer->print(job.encodedFile);
    std::cout << "Printer: " << static_cast<unsigned int>(printer->printerData.id) << " finished printing; Hash: "
              << hashFn(job.encodedFile)
              << std::endl;
}
