#ifndef MENTOR_
#define MENTOR_
#include <iostream>
#include <cstring>
#include <vector>
#include "Intern.h"
#include "ITSpecialist.h"

class Mentor : public Employer
{
private:
	unsigned numOfInterns;
	std::vector<Intern> array;
	unsigned yearsOfMentorshiping;

protected:
	double get_annual_raise_multiplier() const override;

public:
	Mentor();
	Mentor(unsigned num, std::vector<Intern> arrayInt, unsigned years);

};

#endif // !MENTOR_

