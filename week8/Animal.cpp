#include "Animal.h"
#include <iostream>
#include <string>

Animal::Animal()
{
	name = "";
	type = "";
}

Animal::Animal(std::string name_s, std::string type_s)
{
	name = name_s;
	type = type_s;
}

Animal::Animal(const Animal& other)
{
	name = other.name;
	type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
	if (this != &other) {
		name = other.name;
		type = other.type;
	}
	return *this;
}

Animal::Animal(Animal&& other)
{
	name = std::exchange(other.name, "");
	type = std::exchange(other.type, "");
}

Animal& Animal::operator=(Animal&& other)
{
	if (this!= &other) {
		name = std::exchange(other.name, "");
		type = std::exchange(other.type, "");
	}
	return *this;
}
