/* Assignment: 2
Author: Raphael Benoliel
*/
#pragma once

#include"MatchmakingAgency.h"
#include<iostream>

using namespace std;

class Menu
{
public:
	//enum of menu options.
	typedef enum { ADD_NEW_CLIENT = 1, REMOVE_CLIENT, PRINT_ALL_CLIENT, PRINT_ALL_MATCH, EXIT } MenuOption;

	Menu(); //ctor that run the main menu for this program.Resposible to input / ouput with the user.


private:

	MatchmakingAgency db;
	void printOptions() const;//print all the menu options to screen.
	void addClient();//input all the nessesary data to create a new client and add it to the database.
	void removeClient();//input the id and remove the asked client from the database.
	void printDb() const;//print the entire database.
	void printAllMatch();//input the id of a client and search all option in database client in the database.
};

