#include "pch.h"
#include "framework.h"
#include "PermCrypt.h"
#include <string>
#include <iostream>
#include <algorithm>


std::string permEncrypt::reverseString(const std::string& getText) const {

	std::string misc = getText;
	std::reverse(misc.begin(), misc.end());
	return misc;

}
