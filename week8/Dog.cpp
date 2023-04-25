#include "Dog.h"

Dog::Dog()
{
}

Dog::Dog(std::string name_s, std::string type_s) : Animal(name_s, type_s){}

void Dog::talk() {
	std::cout << "Bau, bau" << std::endl;
}
