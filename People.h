#pragma once

class People
{
private:
	char* username; //char username[100];
	char* password; //char username[100];

public:
	People();
	People(const char* usernameStr, const char* passwordStr);
	People(People const& other);
	People& operator=(People const& other);
	People(People&& other);
	People& operator=(People&& other);
};
