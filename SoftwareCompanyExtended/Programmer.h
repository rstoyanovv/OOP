#ifndef _PROGRAMMER_H
#define _PROGRAMMER_H
#include <string>
#include "ITSpecialist.h"
#include "Employer.h"

class Programmer : public ITSpecialist {
public:
	Programmer(std::string name, const unsigned int experience, const double salary, const std::string& language);
	Employer* clone() const override;

private:
	std::string language;

	double get_annual_raise_multiplier() const override;
};

#endif