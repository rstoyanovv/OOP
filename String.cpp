#include "String.h"
#include <iostream>
#include <cstring>

int String::length()
{
	unsigned int length = strlen(str);
	return length;
}

String::String(const char* strValue)
{
	unsigned lenght = strlen(strValue);
	str = new char[lenght];
	for (int i = 0; i < lenght; i++) {
		str[i] = strValue[i];
	}
}

String::String(String const& objValue)
{
	unsigned lenght = strlen(objValue.str);
	str = new char[lenght];
	for (int i = 0; i < lenght; i++) {
		str[i] = objValue.str[i];
	}
}

String& String::operator=(String const& objValue)
{
	if (this != &objValue) {
		delete[] str;
        unsigned lenght = strlen(objValue.str);
	    str = new char[lenght];
	    for (int i = 0; i < lenght; i++) {
		     str[i] = objValue.str[i];
	    }
	}
	return *this;
}

String& String::operator=(String String)
{
	if (this != &String) {
		delete[]str;
		unsigned lenght = strlen(String.str);
		str = new char[lenght];
		for (int i = 0; i < lenght; i++) {
			str[i] = String.str[i];
		}
	}
	return *this;
}

String::~String()
{
	delete[]this->str;
}

String::String(String&& objValue)
{
	this->str = objValue.str;
	objValue.str = nullptr;
}

String& String::operator=(String&& objValue)
{
	if (this != &objValue) {
		this->str = objValue.str;
		objValue.str = nullptr;
	}
	return *this;
}

char String::operator[](unsigned int index)const
{
	return str[index];
}

String String::operator+(const String& other)
{
	char* result = new char[this->length() + other.length() + 1];
	strcpy(result, this->str);
	strcat(result, other.str);
	String resObject(result);
	delete[] result;
	return resObject;
}
