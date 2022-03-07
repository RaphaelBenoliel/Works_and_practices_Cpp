/* Assignment: 2
Author: Raphael Benoliel
*/
#pragma once
#include"String.h"

class Client
{
public:
	///public method of class Client :
	Client(const String& id, const String& name, char gender, int age,char** hobby,int hobbySize);//Ctor of class client.

	Client(const Client& other);//Copy Ctor of class client.

	~Client();//DCtor of class client.
	/////Operator method of class client.
	friend std::ostream& operator<<(std::ostream& os, const Client& c);
	bool operator==(const Client& c)const;
	
	//get method of class Client : 
	int getAge()const {return age; }
	const String& getID()const {return *ID; }
	const String& getfullName()const { return *fullName; }
	char getGender()const { return gender; }

protected:
	////Protect Objects of class client.  get permission to ViPClient to use the objects of class client //////
	String* ID;
	String* fullName;
	char gender;
	int age;
	char** hobby;
	int hobbySize;
	int shareHobby(const Client& c)const;
	
};

