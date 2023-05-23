#include "Employer.h"

Employer::Employer()
{
}

Employer::Employer(std::string name, const unsigned int experience, const double salary)
	: name(name), experience(experience), salary(salary)
{
}

double Employer::get_salary() const
{
	return this->salary;
}

void Employer::annual_raise()
{
	this->salary *= this->get_annual_raise_multiplier();
}