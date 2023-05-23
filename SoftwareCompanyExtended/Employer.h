#ifndef _EMPLOYER_H
#define _EMPLOYER_H
#include <string>

class Employer {
public:
	Employer();
	Employer(std::string name, const unsigned int experience, const double salary);
	virtual ~Employer() = default;
	double get_salary() const;
	void annual_raise();
	virtual Employer* clone() const = 0;

protected:
	virtual double get_annual_raise_multiplier() const = 0;

private:
	std::string name;
	unsigned int experience;
	double salary;
};

#endif

