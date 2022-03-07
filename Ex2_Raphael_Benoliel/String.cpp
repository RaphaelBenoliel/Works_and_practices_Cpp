/* Assignment: 2
Author: Raphael Benoliel
*/
#include "String.h"

using namespace std;

String::String()
{//default Ctor 
	str = new char[1];
	str[0]='\0';

}

String::String(const char(&word)[MAX_SIZE])
{//Ctor of class string.
	str = new char [strlen(word)+1];//Memory allocation to new char with size of "word".
	int i = 0;
	while (word[i])
	{
		str[i] = word[i++];// cpoy the values from "word" to the object from class string.
	}
	str[i] = 0;
}
String::String(const char* word) 
{
	str = new char[strlen(word) + 1];
	int i = 0;
	while (word[i])
	{
		str[i] = word[i++];
	}
	str[i] = 0;
}
String::~String()
{//Dctor 
	delete[] str;//free memory of str .
}
String& String::operator=(const String& other)
{
	int i = 0;
	if (this!= &other)
	{
		delete[] str;
		str = new char[strlen(other.str) + 1];
		
		while (other.str[i])
			str[i] = other.str[i++];
		str[i] = 0;
	}
	
	return *this;
}
bool String::operator==(const String& other)const
{
	int i = 0;
	while (other.str[i] || str[i])
	{
		if (this->str[i] != other.str[i++])
			return false;
	}
	return true;
}
String::String(const String& other)
{
	str = new char[strlen(other.str) + 1];
	int i = 0;
	while (other.str[i])
	{ 
		str[i] = other.str[i++]; 
	}
	str[i] = 0;
}

std::ostream& operator<<(std::ostream& os, const String& s)
{
	os << s.str;
	return os;
}
