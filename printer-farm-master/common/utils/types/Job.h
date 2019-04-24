//
// Created by railgunpat on 16.04.19.
//

#ifndef PRINTER_FARM_SLAVE_JOB_H
#define PRINTER_FARM_SLAVE_JOB_H

#include <string>

struct Job {
    std::string path;
    std::string encodedFile;
    bool isNull() {
        if (path.length() == 0 && encodedFile.length() == 0) {
            return true;
        }
    }
};

#endif //PRINTER_FARM_SLAVE_JOB_H
