#include "System.h"
#include <iostream>
#include <fstream>

System::System()
{
	arrayPeople = nullptr;
	capacity = 0;
	peopleCount = 0;
	fileName = nullptr;
}

System::System(const char* fileName)
{
	std::ofstream ofileName;
	ofileName.open(fileName, std::ios::out | std::ios::binary);
	People person1 = { "member","pass1234" };
	ofileName.write((char*)&person1, sizeof(person1));

	ofileName.close();

}

System::System(System const& other)
{
	capacity = other.capacity;
	peopleCount = other.peopleCount;
	arrayPeople = new People[capacity];
	
}

System& System::operator=(System const& other)
{
	if (this != &other) {
		capacity = other.capacity;
		peopleCount = other.peopleCount;
		arrayPeople = new People[capacity];
	}
	return *this;
}

void System::resize(unsigned newSize)
{
	if (newSize > capacity) {
		capacity = newSize;
		People* newArrayPeople = new People[capacity];
		for (size_t i = 0; i < capacity; i++) {
			arrayPeople[i] = newArrayPeople[i];
		}
		delete[]newArrayPeople;
	}
}

void System::addPerson(const People person)
{
	std::ofstream ofileName(this->fileName, std::ios::binary);
	if (arrayPeople != nullptr) {
		if (peopleCount == capacity) {
			peopleCount++;
		}
	}
	int length = strlen(person.username);
	ofileName.write((char*)&length, sizeof(length));
	ofileName.write((char*)&person.username, length);
	/*ofileName.write((char*)&person, sizeof(person))*/
}
