#include "Header1.h"
#include <iostream>
int ID = 0;

Inventory::Inventory() {
	this->salty = 0;
	this->sweet = 0;
	this->drinks = 0;
}

VendingMashine::VendingMachine() {
	this->id = ID++;
	this->address = "";
	this->numWarningMsgs = 0;
	this->capacity = 10;
	this->warningMessages = new char* [capacity];
}

VendingMashine::VendingMachine(char* address, Inventory inventory) {
	int len = strlen(address);
	this->address = new char[len];
	strcpy(this->address, address);

	this->Inventory = inventory;
}

VendingMashine::VendingMachine(VendingMachine const& other) {
	this->copy( other.address, other.numWarningMsgs, other.capacity, other.warningMessages)
}

VendingMashine::move(VendingMachine&& other) {
	this->id = other.id;
	this->numWarningsMsgs = other.numWarningMsgs;
	this->address = other.address;
	this->capacity = other.capacity;
	this->warningMessages = other.warningMessages;
}
