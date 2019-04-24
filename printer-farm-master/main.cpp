

#include <string>
#include <iostream>
#include <src/PrinterFarmMaster.h>

int main(int argc, char **argv) {
    std::string printDir = "/home/railgunpat/print-dir";
    if (argc > 1)
        printDir = argv[1];
    std::cout << "Printing dir: " << printDir << std::endl;
    PrinterFarmMaster printerFarmMaster(printDir);
    printerFarmMaster.bind();
    printerFarmMaster.run();

    return EXIT_SUCCESS;
}
