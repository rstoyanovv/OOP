#ifndef PREMIUM_
#define PREMIUM_
#include <iostream>
#include <cstring>
#include <vector>
#include "System.h"

typedef System Users;

class Premium:public Users
{
public:
	Premium();
	Premium(std::string descriptionStr, const std::vector<std::string>& datesStr);

private:
	std::string description;
	std::vector <std::string> dates;
};

#endif // !PREMIUM_
