#include "../PermCrypt.h"
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

std::string permEncrypt::reverseString(std::string text) {

	std::string result = text;
	std::reverse(result.begin(), result.end());
	return result;

}

std::string permEncrypt::extendAscii(std::string text) {

    std::string final_string = "";
    for (char xr : text) {

        xr = xr + 150;
        final_string += xr;
    }
    return final_string;

}