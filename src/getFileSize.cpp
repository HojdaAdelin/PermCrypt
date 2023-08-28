#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>
#include <fstream>

std::string CleverCpp::fileSize(std::string filetosize) {

    unsigned long long getSize = GetFileSizeEx(CreateFileA(filetosize.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL), NULL);
    return std::to_string(getSize);

}

void CleverCpp::setSize(std::string filetosetsize, int size) {

    std::ofstream setSizeToFile(filetosetsize, std::ios::binary | std::ios::out);

    std::streamsize newSize = static_cast<std::streamsize>(size) * 1024 * 1024;

    setSizeToFile.seekp(newSize - 1);
    setSizeToFile.write("\0", 1);

    setSizeToFile.close();

}