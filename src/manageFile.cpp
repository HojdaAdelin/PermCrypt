#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>
#include <fstream>

std::string CleverCpp::read(std::string filename) {

    std::string getContent, line;

    std::ifstream basicRead(filename);

    while(std::getline(basicRead, line)) {

        getContent += line + "\r\n";

    }

    basicRead.close();

    return getContent;

}
