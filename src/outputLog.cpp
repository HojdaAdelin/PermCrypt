#include <iostream>
#include <string>
#include "clever++.h"
#include <Windows.h>
#include <fstream>

std::string CleverCpp::commandOutput(std::string command, std::string outputFile = "Output.log", std::string absolutePath = "none", bool removeBat = false) {

    std::string getLog;
    std::ofstream writeBat;
    writeBat.open("misc.bat", std::ios::trunc);

    if (absolutePath != "none") {

        writeBat << "@echo off" << "\n";
        writeBat << "pushd ." << "\n";
        writeBat << "cd \"" + absolutePath + "\"" << "\n";
        writeBat << command + " > " + outputFile << "\n";
        writeBat << "popd" << "\n";
        writeBat << "move /Y \"" + absolutePath + "\\" + outputFile + "\"" + " ." << "\n";

    } else {

        writeBat << "@echo off" << "\n";
        writeBat << command + " > " + outputFile << "\n";

    }

    system("misc.bat");

    std::string lines;

    std::ifstream readLog(outputFile);

    while (std::getline(readLog, lines)) {

        getLog += lines + "\r\n";

    }

    if (removeBat == true) {

        std::remove("misc.bat");

    } else {


    }

    return getLog;

}  