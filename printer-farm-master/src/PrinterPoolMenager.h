//
// Created by railgunpat on 24.04.19.
//

#ifndef PRINTER_FARM_MASTER_PRINTERPOOLMENAGER_H
#define PRINTER_FARM_MASTER_PRINTERPOOLMENAGER_H

#include <set>
#include <map>

class PrinterPoolMenager {
    std::set<IdType> avaliblePrinters;
    std::set<std::string> scheldudedPrintsHashmap;
    std::map<IdType, Job> scheldudedPrinterDataToJob;
public:

    unsigned int currentId = static_cast<unsigned char>(static_cast<unsigned int>(PublisherFilters::MAX_RES) + 1);

    unsigned int getNewId();

    unsigned int getPrintersNumber();

    void addFreePrinter(IdType printerId);

    unsigned int countFreePrinters();

    void changePrinterToBusyWithJob(IdType printerId, Job job);

    IdType getFreePrinter();

    unsigned int countPrintersPrinting(std::string &filePath);

    Job popJobIfFinished(PrinterData printerData);

    bool wasPrintermarkedAsBusy(IdType printerId);
};


#endif //PRINTER_FARM_MASTER_PRINTERPOOLMENAGER_H
