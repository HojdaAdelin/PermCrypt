#include <iostream>
#include <string>
#include "PermCrypt.h"

permEncrypt::permEncrypt(std::string text, std::string type) {

	if (type == "reverse") {

		encrypted_text = reverseString(text);

	}
	else if (type == "extend") {

		encrypted_text = extendAscii(text);

	}
	else {

		encrypted_text = encryptError();

	}

}
