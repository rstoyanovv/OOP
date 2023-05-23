#ifndef SYSTEM_
#define SYSTEM_
#include <iostream>
#include <cstring>

class System
{
public:
	System();
	System(std::string usernameStr, std::string passwordStr);
	static bool comparePasswords(std::string pass, std::string pass2);
	bool compare(std::string username, std::string pass);

private:
	static int id_generator;
	int id;
	std::string username;
	std::string password;
};

#endif // !SYSTEM_



