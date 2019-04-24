//
// Created by railgunpat on 24.04.19.
//

#include "PrinterFarmMaster.h"
#include "DirScanner.h"
#include <experimental/filesystem>

std::vector<std::string> DirScanner::scanDir() {
    std::vector<std::string> dir_list;
    for (auto &&p: std::experimental::filesystem::directory_iterator(printDir))
        dir_list.push_back(p.path());
    return dir_list;
}

DirScanner::DirScanner(std::string printDir) : printDir(printDir) {}
