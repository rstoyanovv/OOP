#ifndef ANIMAL_
#define ANIMAL_
#include <iostream>
#include <string>
#include <string>

class Animal
{
private:
	std::string name;
	std::string type;

public:
	Animal();
	Animal(std::string name_s, std::string type_s);
	Animal (const Animal& other);
	Animal& operator= (const Animal& other);
	Animal(Animal&& other);
	Animal& operator= (Animal&& other);

	virtual void talk() = 0;
};

#endif // !ANIMAL_

