#include "People.h"
#include <iostream>
#include <cstring>

People::People()
{
	username = nullptr;
	password = nullptr;
}

People::People(const char* usernameStr, const char* passwordStr)
{
	unsigned usernameLength = strlen(usernameStr);
	unsigned passwordLength = strlen(passwordStr);

	username = new char[usernameLength + 1];
	password = new char[passwordLength + 1];

	strcpy(username, usernameStr);
	strcpy(password, passwordStr);
}

People::People(People const& other)
{
	unsigned usernameLength = strlen(other.username);
	unsigned passwordLength = strlen(other.password);

	username = new char[usernameLength + 1];
	password = new char[passwordLength + 1];

	strcpy(username, other.username);
	strcpy(password, other.password);
}

People& People::operator=(People const& other)
{
	if (this != &other) {
		unsigned usernameLength = strlen(other.username);
		unsigned passwordLength = strlen(other.password);

		delete[]username;
		delete[]password;

		username = new char[usernameLength + 1];
		password = new char[passwordLength + 1];

		strcpy(username, other.username);
		strcpy(password, other.password);
	}
	return *this;
}

People::People(People&& other)
{
	username = std::exchange(other.username, nullptr);
	password = std::exchange(other.password, nullptr);
}

People& People::operator=(People&& other)
{
	if (this != &other) {
		username = std::exchange(other.username, nullptr);
		password = std::exchange(other.password, nullptr);
	}
	return *this;
}
