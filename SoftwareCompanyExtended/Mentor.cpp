#include "Mentor.h"

double Mentor::get_annual_raise_multiplier() const
{
    return 1 + numOfInterns * 0.05;
}

Mentor::Mentor() {}

Mentor::Mentor(unsigned num, std::vector<Intern> arrayInt, unsigned years)
{
    numOfInterns = num;
    array = arrayInt;
    yearsOfMentorshiping = years;
}
