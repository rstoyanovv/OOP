#pragma once
class Employer
{
private:
	std::string name;
	unsigned experience;
	unsigned salary;

public:
	Employer(std::string nameStr, unsigned expInt, unsigned salaryInt);
};

