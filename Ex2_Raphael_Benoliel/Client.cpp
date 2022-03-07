/* Assignment: 2
Author: Raphael Benoliel
*/
#include "Client.h"

using namespace std;
Client::Client(const String& id,const String& name, char gender, int age, char** hobby,int hobbySize)
{
 	this->ID = new String(id); //Memory allocation to ID creat a String with Ctor of class String.
	this->fullName = new String(name);//Memory allocation to fullname creat a String with Ctor of class String.
	this->gender = gender;
	if (age < 18 || age > 120)//define default value if is bigger than 120 or smaller than 18. 
		this->age = 35;
	else
		this->age = age;
	this->hobby = hobby;
	this->hobbySize = hobbySize;
	

}
Client::Client(const Client& other) : Client(*other.ID,*other.fullName,other.gender,other.age,other.hobby,other.hobbySize)
{
}

bool Client::operator==(const Client& c) const
{
	bool isGender = gender != c.gender; //if is opposite gender to this client 
	bool isAge = age - c.age <= 5 && age - c.age >= -5; //if the age difference between them not exceed 5 year.
	bool isHobby = shareHobby(c)!=0; //they have at least one share hobby
	return (isGender && isAge && isHobby);//return true if all true else return false
	
}

Client::~Client()
{
	delete ID;//free memory of the "ID" from class string.
	delete fullName;//free memory of the "fullname" from class string.
	for (int i = 0; i < hobbySize; i++)//free memory of hobby array.
	{
		delete[] hobby[i];//delete all char in array.
	}
	delete[] hobby;//delete hobbies.
}
int Client::shareHobby(const Client& c) const
{
	int conter = 0;//define a variable to count the shared hobbies.
	for (int i = 0; i < hobbySize; i++)
	{
		for (int j = 0; j < c.hobbySize; j++)
		{
			if (strcmp(hobby[i], c.hobby[j]) == 0)//compare the all hobbies in array  
				 conter++;//increase count if is true 
		}
	}
	return conter;//return sum of shared hobbies.
}
std::ostream& operator<<(std::ostream& os, const Client& c)
{//print all the deatail of client 
	os << "Client ID: " <<*c.ID << endl;
	os << "Client fullname: " << *c.fullName << endl;
	os << "Client age: " << c.age << endl;
	os << "Client gender: " << c.gender << endl;
	os << "Client hobbies: "  ;
	for (int i = 0; i <c.hobbySize ; i++)
	{
		os << i + 1 << ":" << c.hobby[i];
		os << "      ";
	}
	return os;
}

