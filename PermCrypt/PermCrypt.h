#pragma once
#include <string>

class permEncrypt {

private:
	std::string encryptedText;

public:
	permEncrypt(std::string text, std::string type) {



	}

	std::string getEncryptedText() const {

		return encryptedText;

	}

private:
	std::string reverseString(const std::string& getText) const;

};