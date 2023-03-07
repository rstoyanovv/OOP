#include "Header2.h"
#include <iostream>

Set::Set() {
	this->elements = 0;
	this->numElements = 0;
	this->capacity = 0;
}

Set::Set(Set const& other) {
	this->elements = other.elements;
	this->numElements = other.numElements;
	this->capacity = other.capacity;
}

int main() {

}