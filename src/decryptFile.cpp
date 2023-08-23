#include <iostream>
#include <fstream>
#include "clever++.h"
#include <string>

void CleverCpp::decrypt(std::string Dfilename) {

    std::ifstream checkMisc("misc" + Dfilename);

    bool miscResult = checkMisc.good();

    checkMisc.close();

    if (miscResult == false) {

        std::cout << "File isn't encrypted or misc file dont't exist!";
        return;

    }
    else {
        bool fresult = false;

        char xr;
        std::fstream fin, fout;

        fin.open(Dfilename, std::fstream::in);

        if (!fin) {
            std::cout << "Error: File can't be opened!", "SaveNet";
            return;
        }
        fresult = true;

        fout.open("misc" + Dfilename, std::fstream::out);

        if (!fout) {
            std::cout << "Error: Can't write to the file!";
            fin.close();
            return;
        }
        

        while (fin >> std::noskipws >> xr) {

           
            xr = xr - (1000 * 8 + 45550 + 880 + 2222);
            fout << xr;

        }

        fin.close();
        fout.close();

        fin.open("misc" + Dfilename, std::fstream::in);
        fout.open(Dfilename, std::fstream::out);

        while (fin >> std::noskipws >> xr) {
            fout << xr;
        }

        fin.close();
        fout.close();

        if (fresult) {
            std::cout << Dfilename + " decrypted!";
            std::remove(std::string("misc" + Dfilename).c_str());

        }
    }


}