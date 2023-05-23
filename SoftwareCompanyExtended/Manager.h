#ifndef _MANAGER_H
#define _MANAGER_H
#include "Employer.h"

class Manager : public Employer {
public:
	Manager(std::string name, const unsigned int experience, const double salary, const unsigned int number_managed);
	Employer* clone() const override;

private:
	unsigned int number_managed;

	double get_annual_raise_multiplier() const override;
};

#endif
