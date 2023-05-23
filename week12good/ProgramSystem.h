#ifndef PROGRAMSYSTEM_
#define PROGRAMSYSTEM_
#include <iostream>
#include <cstring>
#include "System.h"
#include "Premium.h"

typedef System Users;

class ProgramSystem :public Premium
{
public:
	bool loginUser(std::string username, std::string password);


private:
	std::vector<Users> arrayOfUsers;
	
};

#endif // !PROGRAMSYSTEM_

