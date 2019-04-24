//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_PRINTERDATA_H
#define PRINTER_FARM_SLAVE_PRINTERDATA_H

#include "commonsymbols.h"

struct PrinterData {
    IdType id = static_cast<IdType>(PrinterStatus::NO_ID);
    PrinterStatus printerStatus = PrinterStatus::NO_ID;
    unsigned int jobId = static_cast<unsigned int>(JobIdsReserved::NONE);
};


#endif //PRINTER_FARM_SLAVE_PRINTERDATA_H
