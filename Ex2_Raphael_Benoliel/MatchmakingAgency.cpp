/* Assignment: 2
Author: Raphael Benoliel
*/

#include"MatchmakingAgency.h"
#include<iostream>
using namespace std;

MatchmakingAgency::MatchmakingAgency()
{//default Ctor to reset the data Base.
	db = new Client* [MAX_SIZE];//Memory allocation to creat the database of client.
	for (int i = 0; i < MAX_SIZE; i++)
	{
		db[i] = NULL;//reset all array in data base.
	}
	dbSize = 0;//reset the size of array database 
}

void MatchmakingAgency::searchClient(const String& id)const
{////////Method for Search Client in database/////////////
	bool matchfound = false;//boolian flag 
	Client* searcher = nullptr;//define searcher to client type to copy the client from database.
	for (int i = 0, j = 0; j < dbSize && i<MAX_SIZE; i++)//search the client from database with the same id.
	{
		if (db[i] == NULL) { continue; } //if is removed skip 
			j++;//else increase database size
			if (db[i]->getID() == id) //if the client id in database is equal to the input id
			{
				searcher = db[i];//copy client from database to the searcher.
				break;//end loop
			}
	}
	if (!searcher)//if seracher is null so no id found.user get a correct message.
	{
		cout << "Sorry we cannot found This " << id <<"I.D ."<< endl;
		return;//exit.
	}
	for (int i = 0, j = 0; j < dbSize && i < MAX_SIZE; i++)//second interaction to compare the client with the operator== from class client.
	{
		if (db[i] == NULL) { continue; } //if is removed skip 
		j++;
		if (*(db[i])==*searcher)//if the searcher(with the input id) has the shared hobbies + opsite gender +  age difference is true .
		{
			if(!matchfound)
			{ 
				cout << "===========All Client Match===========\n";
				matchfound = true;//to print the message one time 
			}
			cout << *(db[i])<<endl;//print the client that have a match 
		}
	}
	if(!matchfound)//if all itercetion is flase so no match.
		cout << "NO MATCH FOUND!" << endl;//print a correct messsage.
}

MatchmakingAgency::~MatchmakingAgency()
{/////DCtor of class MatchmakingAgency.
	for (int i = 0; i < MAX_SIZE; i++)
	{
		delete db[i];//free the memory of all clients in database.(delete all client)
	}
	delete[] db;//free memory of database.(delete data base)

}

MatchmakingAgency& MatchmakingAgency::operator+=(const Client& other)
{
	for (int i = 0; i < MAX_SIZE; i++)
	{
		if (db[i]==NULL)//if the array in database is null you can add the client intro.
		{ 
			db[i] = new Client(other);//copy a new client to database.
			dbSize++;// increase the size of database
			break;
		}
	}
	return *this;//return database.
}

MatchmakingAgency& MatchmakingAgency::operator-=(const Client& other)
{
	return operator-=(other.getID());
}

MatchmakingAgency& MatchmakingAgency::operator-=(const String& other)
{
	bool found = false; ///boolian flag to know when to print to correct message if client id not found .
	for (int i = 0, j = 0; j < dbSize && i < MAX_SIZE; i++)
	{
		if (db[i] == NULL) { continue; } //if the array is removed skip to the next array in database. 
		j++;//move to the next array.
		if (db[i]->getID() == other)
		{
			found = true;
			delete db[i];//free the mommery of client founded from database.
			db[i] = NULL;
			dbSize--;//when we removed the client from database we decrease the size of database.
			cout << "the client was removed.\n";
			break;
		}
	}
	if (!found)//if client id not founded.
		cout << "Wrong I.D No client was removed\n";

	return *this;
}


std::ostream& operator<<(std::ostream& os, const MatchmakingAgency& c)
{///ostream to print all database.

	for (int i = 0, j = 0; j < c.dbSize && i < MAX_SIZE; i++)
	{
		if (c.db[i] == NULL) { continue; }//if the array is into database is empty pass to the next array.
		j++;
		
		os << *(c.db[i]) << endl;
	}
	return os;
}
