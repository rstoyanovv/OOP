#include "Cat.h"

Cat::Cat(std::string name_s, std::string type_s): Animal(name_s, type_s){}

void Cat::talk() {
	std::cout << "Myu" << std::endl;
}

Cat::Cat()
{
	
}

