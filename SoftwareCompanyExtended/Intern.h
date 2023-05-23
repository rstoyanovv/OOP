#ifndef INTERN_
#define INTERN_
#include <iostream>
#include "ITSpecialist.h"

class Intern : public ITSpecialist 
{
private:
	std::string education;
	int durationOfInternship;

protected:
	double get_annual_raise_multiplier() const override;

public:
	Intern();
	Intern(std::string edu, int dur);
};

#endif // !INTERN_



