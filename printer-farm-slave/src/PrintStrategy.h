//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_PRINTSTRATEGY_H
#define PRINTER_FARM_SLAVE_PRINTSTRATEGY_H


class PrintStrategy {


public:
    virtual void loadDataFromString(std::string &encodedFile_) = 0;

    virtual bool print() = 0;
};

#endif //PRINTER_FARM_SLAVE_PRINTSTRATEGY_H
