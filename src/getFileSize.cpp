#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>

std::string CleverCpp::fileSize(std::string filetosize) {

    unsigned long long getSize = GetFileSizeEx(CreateFileA(filetosize.c_str(), GENERIC_READ, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, NULL), NULL);
    return std::to_string(getSize);

}
