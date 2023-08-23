#include <iostream>
#include <fstream>
#include "clever++.h"
#include <string>


void CleverCpp::encrypt(std::string Efilename) {

    
    std::ifstream checkForMisc("misc" + Efilename);

	bool miscResult = checkForMisc.good();

	checkForMisc.close();

	
	if (miscResult == true) {

		std::cout << "The file can't be encrypted twice!";
		return;

	}
	else {

		bool fresult, sresult;
		char xr;
		std::fstream fin, fout;

		fin.open(Efilename, std::fstream::in);

		if (!fin) {

			std::cout << "Error: File can't be opened!";
			return;
		}
		fresult = true;

		fout.open("misc" + Efilename, std::fstream::out);

		if (!fout) {

			std::cout << "Error: Can't write to the file!";
			fin.close();
			return;

		}
		sresult = true;

		

		while (fin >> std::noskipws >> xr) {

			
			
			xr = xr + (1000 * 8 + 45550 + 880 + 2222);
			fout << xr;

			
		}

		fin.close();
		fout.close();

		fin.open(Efilename, std::fstream::out);
		fout.open("misc" + Efilename, std::fstream::in);

		while (fout >> std::noskipws >> xr) {

			fin << xr;

		}

		fin.close();
		fout.close();

		if (fresult == true && sresult == true) {

			std::cout << Efilename << " encrypted!";

		}

	}

}

