#pragma once
#include <iostream>

class String
{
private:
	char* str;
	int length();

public:
	String(const char* strValue);
	String(String const& objValue);
	String& operator=(String const& objValue);
	String& operator=(String String);
	~String();
	String(String&& objValue);
	String& operator=(String&& objValue);
	char operator[](unsigned int index)const;
	String operator+(const String& other);
};
