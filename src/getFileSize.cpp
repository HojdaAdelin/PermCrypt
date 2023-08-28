#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>
#include <fstream>

int CleverCpp::fileSize(std::string filetosize) {

    std::ifstream in_file(filetosize, std::ios::binary);
    in_file.seekg(0, std::ios::end);
    int file_size = in_file.tellg();
    return file_size;

}

void CleverCpp::setSize(std::string filetosetsize, int size) {

    std::ofstream setSizeToFile(filetosetsize, std::ios::binary | std::ios::out);

    std::streamsize newSize = static_cast<std::streamsize>(size) * 1024 * 1024;

    setSizeToFile.seekp(newSize - 1);
    setSizeToFile.write("\0", 1);

    setSizeToFile.close();

}