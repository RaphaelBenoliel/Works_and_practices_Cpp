/* Assignment: 2
Author: Raphael Benoliel
*/
#pragma once
#include"Client.h"

class VIPClient :public Client //class VipClient is Inheritance from class Client. 
{
	///public method of class VIPClient :
	VIPClient(const String& id, const String& name, char gender, int age, char** hobby, int hobbySize, int minS);//Ctor of class VIPclient

	bool operator==(const Client& c) const;//method operator to compare client with.

	~VIPClient();//DCtor of class VIPClient
	
	
private:
	//private object of class VIPClient : 
	int minShareHobby;
	
};

