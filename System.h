#pragma once
#include "People.h";
class System
{

private:
	People* arrayPeople;
	unsigned capacity;
	unsigned peopleCount;
	char* fileName;

public:
	System();
	System(const char* fileName);
	System(System const& other);
	System& operator=(System const& other);

	void resize(unsigned newSize);
	void addPerson(const People person);
};
