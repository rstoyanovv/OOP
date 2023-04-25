#pragma once
#include "Employer.h"
class Manager : public Employer
{
private:
	unsigned people;

public:
	Manager(unsigned peopleInt);
};

