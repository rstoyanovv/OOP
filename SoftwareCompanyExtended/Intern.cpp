#include "Intern.h"

double Intern::get_annual_raise_multiplier() const
{
    if (durationOfInternship > 12) {
        return 1.05;
    }
}

Intern::Intern()
{
}

Intern::Intern(std::string edu, int dur)
{
    education = edu;
    durationOfInternship = dur;
}
