/* Assignment: 2
Author: Raphael Benoliel
*/
#pragma once
#include<string.h>
#include<ostream>
#define MAX_SIZE 120 // Max size of string in this program.

class String
{
public: 
	///public method of class String :
	String();//default Ctor to rest value.

	String(const char(&word)[MAX_SIZE]);//Ctor to String .

	String(const char* word);//Ctor to String .

	String(const String& other);//copy constructor to string.

	~String();//DCtor to string.
	///operator method of class String.
	friend std::ostream& operator<<(std::ostream& os, const String& other);//cout(ostream) operator to print String type .
	String& operator=(const String& other);//Assignment operator to String type.
	bool operator==(const String& other)const;
	
private:
	//private object of class String
	char* str;//pointer to char to creat a String.

};

