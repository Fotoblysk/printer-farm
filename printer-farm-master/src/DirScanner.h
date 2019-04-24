//
// Created by railgunpat on 24.04.19.
//

#ifndef PRINTER_FARM_MASTER_DIRSCANNER_H
#define PRINTER_FARM_MASTER_DIRSCANNER_H


#include <string>
#include <vector>

class DirScanner {
    std::string printDir;

public:
    DirScanner(std::string printDir);

    std::vector<std::string> scanDir();
};


#endif //PRINTER_FARM_MASTER_DIRSCANNER_H
