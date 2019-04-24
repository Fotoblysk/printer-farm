//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_FAKEPRINTSTRATEGY_H
#define PRINTER_FARM_SLAVE_FAKEPRINTSTRATEGY_H

#include <thread>
#include <random>
#include "PrintStrategy.h"

class FakePrintStrategy : public PrintStrategy {
public:
    FakePrintStrategy() : generator(rd()), distribution(10, 60) {
    }

    void loadDataFromString(std::string &encodedFile_) override {
        encodedFile = encodedFile_;
    }

    bool print() override {
        std::this_thread::sleep_for(std::chrono::seconds(distribution(generator)));
        return true;
    }

private:
    std::random_device rd;
    std::mt19937 generator;
    std::uniform_int_distribution<> distribution;
    std::string encodedFile;
};

#endif //PRINTER_FARM_SLAVE_FAKEPRINTSTRATEGY_H
