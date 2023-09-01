#include <iostream>
#include <string>
#include <Windows.h>
#include "clever++.h"
#include <Shlwapi.h>

void CleverCpp::moveFile(std::string fileSource, std::string destinationSource) {

    std::string fullDestinationPath = destinationSource + "\\" + PathFindFileNameA(fileSource.c_str());

    MoveFileA(fileSource.c_str(), fullDestinationPath.c_str());

}