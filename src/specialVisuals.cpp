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
