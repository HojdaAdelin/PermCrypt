#include <iostream>
#include "clever++.h"
#include <string>
#include <Windows.h>
#include <fstream>
#include <cstdio>

std::string CleverCpp::read(std::string filename) {

    std::string getContent, line;

    std::ifstream basicRead(filename);

    while(std::getline(basicRead, line)) {

        getContent += line + "\r\n";

    }

    basicRead.close();

    return getContent;

}

void CleverCpp::write(std::string filetowrite, std::string content, bool clearAndWrite, bool append) {

    std::ofstream basicWrite;

    if (clearAndWrite) {
        basicWrite.open(filetowrite, std::ios::trunc);
    } else {
        basicWrite.open(filetowrite, std::ios::app);
    }

    if (basicWrite.is_open()) {
        basicWrite << content;
        basicWrite.close();
    } 


}

void CleverCpp::clear(std::string fileclear) {

    std::ofstream basicClear(fileclear, std::ios::trunc);

    basicClear.close();

}

void CleverCpp::create(std::string filetocreate) {

    std::ofstream createFile(filetocreate);
    createFile.close();

}

void CleverCpp::deleteFile(std::string filedelete) {

    std::remove(filedelete.c_str());

}   