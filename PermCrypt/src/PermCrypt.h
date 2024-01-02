#pragma once
#include <string>

class permEncrypt {

private:
	std::string encrypted_text;

public:
	// text = yout text
	// type = encryption type (reverse or extend)
	permEncrypt(std::string text, std::string type);
	std::string returnEncryptedText() const;
	
private:
	std::string reverseString(std::string text);
	std::string extendAscii(std::string text);
	std::string encryptError();
};