/* Assignment: 2
Author: Raphael Benoliel
*/
#include"VIPClient.h"

//default Ctor .
VIPClient::VIPClient(const String& id, const String& name, char gender, int age, char** hobby, int hobbySize, int minS)
	:Client(id,name,gender,age,hobby,hobbySize),minShareHobby(minS){}

bool VIPClient::operator==(const Client& c) const
{
	bool isGender = gender != c.getGender(); //if is opposite gender to this client
	bool isAge = age - c.getAge() <= 5 && age - c.getAge() >= -5;//if the age difference between them not exceed 5 year.
	bool isHobby = shareHobby(c)>=minShareHobby;// if the shared hobbies is bigger or equal to the "minSharehobby" (Determined in the constructor of the object).
	return (isGender && isAge && isHobby);//return true if all this is true else you get false.

}

VIPClient::~VIPClient()
{
	//no allocation to free .
}
