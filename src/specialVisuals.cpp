#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>

void CleverCpp::hide(std::string filetohide, bool hidefile) {

    if (hidefile == true) {

        SetFileAttributesA(filetohide.c_str(), FILE_ATTRIBUTE_HIDDEN);

    } else {

        SetFileAttributesA(filetohide.c_str(), FILE_ATTRIBUTE_NORMAL);

    }

}


void CleverCpp::readonly(std::string filetoreadonly, bool readonlyfile) {

    if (readonlyfile == true) {

        SetFileAttributesA(filetoreadonly.c_str(), FILE_ATTRIBUTE_READONLY);

    } else {

        SetFileAttributesA(filetoreadonly.c_str(), FILE_ATTRIBUTE_NORMAL);

    }

}