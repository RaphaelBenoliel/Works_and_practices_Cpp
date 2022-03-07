/* Assignment: 2
Author: Raphael Benoliel
*/
#pragma once
#include"VIPClient.h"


class MatchmakingAgency
{
public:
	///public method of class MatchmakingAgency :
	MatchmakingAgency();//Default Ctor of class MatchmakingAgency to reset all database.

	void searchClient(const String& id)const;//method to search a client on database As defined in class client with method operator ==.

	~MatchmakingAgency();///DCtor of class MatchmakingAgency.
	/////Operator methods of class MatchmakingAgency.
	friend std::ostream& operator<<(std::ostream& os, const MatchmakingAgency& c);
	MatchmakingAgency& operator+=(const Client& other);//Operator to add a client to the data base.
	MatchmakingAgency& operator-=(const Client& other);//Operator to remove a client from data base. 
	//aid method operator to remove client by enter id 
	MatchmakingAgency& operator-=(const String& other);
private:
	////private object of class String
	Client** db;//dual ptr to client 
	int dbSize;//size of dual ptr client 
};

