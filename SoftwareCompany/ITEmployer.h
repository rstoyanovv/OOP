#pragma once
#include "Employer.h"
#include <string>
#include <iostream>

class ITEmployer:public Employer
{
private:
	std::string project;

public:
	ITEmployer(std::string projectStr);
};

