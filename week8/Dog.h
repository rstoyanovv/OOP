#ifndef DOG_
#define DOG_
#include "Animal.h"

class Dog:public Animal
{

public:
	Dog();
	Dog(std::string name_s, std::string type_s);
	void talk();
};

#endif // !DOG_

