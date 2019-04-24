//
// Created by railgunpat on 24.04.19.
//

#ifndef PRINTER_FARM_MASTER_BINARYFILEREADER_H
#define PRINTER_FARM_MASTER_BINARYFILEREADER_H

#include <vector>
#include <string>

class BinaryFileReader {
    std::vector<unsigned char> buffer;
public:
    std::string readBinaryFile(std::string& filePath);
};

#endif //PRINTER_FARM_MASTER_BINARYFILEREADER_H
