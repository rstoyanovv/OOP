#include "Employer.h"
#include <iostream>
#include <string>

Employer::Employer(std::string nameStr, unsigned expInt, unsigned salaryInt)
{
	name = nameStr;
	experience = expInt;
	salary = salaryInt;
}
