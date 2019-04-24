//
// Created by railgunpat on 24.04.19.
//

#include <fstream>
#include "DirScanner.h"
#include "PrinterFarmMaster.h"
#include "BinaryFileReader.h"

std::string BinaryFileReader::readBinaryFile(std::string &filePath) {
    std::ifstream file(filePath, std::ios::binary);
    file.seekg(0, std::ios::end);
    int fileSize = file.tellg();
    file.seekg(0, std::ios::beg);
    fileSize -= file.tellg();
    buffer.resize(fileSize);
    file.read((char *) &(buffer[0]), fileSize);
    file.close();
    return std::string(buffer.begin(), buffer.end());
}
