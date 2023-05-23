#include "System.h"

System::System()
{
	id = id_generator++;
	username = "";
	password;
}

std::string hashedPassword(std::string pass) {
	size_t passLength = pass.length();
	std::string newPassword;

	for (size_t i = 0; i < passLength; i++) {
		int ascii;
		if ((pass[i] > 'a' && pass[i] < 'z') || (pass[i] > 'A' && pass[i] < 'Z')) {
			ascii = int(pass[i]) + 1;
			newPassword[i] = char(ascii);
		}
		if (pass[i] > '0' && pass[i] < '10') {
			ascii = int(pass[i]) - 1;
			newPassword[i] = char(ascii);
		}
		if (pass[i] == '0') {
			ascii = 63;
			newPassword[i] = char(ascii);
		}
	}
	return newPassword;

}
System::System(std::string usernameStr, std::string passwordStr)
{
	id = id_generator++;
	username = usernameStr;
	password = hashedPassword(passwordStr);
}

bool System::comparePasswords(std::string password, std::string internalPassword)
{
	password = hashedPassword(password);
	if (password == internalPassword) {
		return true;
	}
	else {
		return false;
	}
}

bool System::compare(std::string username, std::string pass)
{
	return this->username == username && comparePasswords(this->password, pass);
}
