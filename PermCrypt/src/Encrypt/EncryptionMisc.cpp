#include "../PermCrypt.h"
#include <iostream>
#include <string>


std::string permEncrypt::returnEncryptedText() const {

	return encrypted_text;

}

std::string permEncrypt::encryptError() {

	return "Can't encrypt the text!";

}