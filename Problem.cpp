#include "Plant.h"
#include <iostream>
#include <cstring>
#pragma warning (disable:4996)

Plant::Plant() {
	type = nullptr;
	location = nullptr;
	frequency = 3;
}

Plant::Plant(const char* typeStr, const char* locationStr, const int frequencyInt) {
	
	size_t typeStrLength = strlen(typeStr);
	type = new char[typeStrLength + 1];
	strcpy(type, typeStr);

	size_t locationStrLength = strlen(locationStr);
	location = new char[locationStrLength + 1];
	strcpy(location, locationStr);

	frequency = frequencyInt;
}

Plant::Plant(const Plant& other) {
	
	size_t typeLength = strlen(other.type);
	size_t locationLength = strlen(other.location);

	type = new char[typeLength + 1];
	strcpy(type, other.type);

	location = new char[locationLength + 1];
	strcpy(location, other.location);

	frequency = other.frequency;
}

Plant& Plant::operator=(const Plant& other) {
	if (this != &other) {

		delete[]type;
		delete[]location;

		size_t typeLength = strlen(other.type);
		size_t locationLength = strlen(other.location);

		type = new char[typeLength + 1];
		strcpy(type, other.type);

		location = new char[locationLength + 1];
		strcpy(location, other.location);

		frequency = other.frequency;
	}
	return *this;
	
}

Plant::Plant(Plant&& other) noexcept {
	type = other.type;
	other.type = nullptr;
	
	location = other.location;
	other.location = nullptr;

	frequency = other.frequency;
	other.frequency = 0;
}

Plant& Plant::operator=(Plant&& other) noexcept {
	if (this == nullptr) {
		return *this;
	}
	
	if (this != &other) {
		delete[] type;
		delete[] location;

		type = other.type;
		other.type = nullptr;

		location = other.location;
		other.location = nullptr;

		frequency = other.frequency;
		other.frequency = 0;
	}
	return *this;
}

Plant::~Plant() {
	delete[]type;
	delete[]location;
}

const char* Plant::getType() const {
	return type;
}

const char* Plant::getLocation() const {
	return location;
}

int Plant::getFrequency() const {
	return frequency;
}
