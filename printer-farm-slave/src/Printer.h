//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_PRINTER_H
#define PRINTER_FARM_SLAVE_PRINTER_H

#include <memory>
#include "../common/utils/types/PrinterData.h"
#include "PrintStrategy.h"

class Printer {
    std::unique_ptr<PrintStrategy> printStrategy;

public:
    PrinterData printerData;

    Printer(PrintStrategy *printStrategy, IdType id_) : printStrategy(printStrategy) {
        printerData.id = id_;
    }

    bool print(std::string& encodedMsg) {
        printStrategy->loadDataFromString(encodedMsg);
        printStrategy->print();
        return true;
    }
};

#endif //PRINTER_FARM_SLAVE_PRINTER_H
