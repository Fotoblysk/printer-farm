#include "src/PrinterFarmSlave.h"

int main() {
    PrinterFarmSlave printerFarmSlave;
    printerFarmSlave.connect("tcp://localhost:5565", "tcp://localhost:5564"); // TODO encapsulate address
    while (!printerFarmSlave.shouldExit) {
        auto msgString = printerFarmSlave.waitForCall();
        printerFarmSlave.handleCall(msgString);
    }
    return EXIT_SUCCESS;
}