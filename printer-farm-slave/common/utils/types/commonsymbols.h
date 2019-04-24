//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_COMMONSYMBOLS_H
#define PRINTER_FARM_SLAVE_COMMONSYMBOLS_H

typedef unsigned char IdType;


enum class PrinterStatus {
    NO_ID = 0,
    WAITING = 1,
    FINISHED = 2,
    FAILED = 3,
};

enum class PublisherFilters {
    EXIT = 0,
    REQUEST_ALL = 1,
    MAX_RES = REQUEST_ALL,
    NONE = EXIT
};

enum class JobIdsReserved {
    NONE = 0,
    MAX_RES = NONE,
};

#endif //PRINTER_FARM_SLAVE_COMMONSYMBOLS_H
