/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Item.h"
#pragma once

class Movie:public Item
{

public:
	float getPrice()const; 
	virtual void print() = 0;

protected:

	int clipLevel(int level,int max)const;
};

class Scifi: public Movie
{
public:
	Scifi(int serial, std::string name, int yearpub, int scifilevel);
	Scifi(int serial, std::string* p);
	void print();

private:

	int scifilevel;
};

class Thriller : public Movie
{
public:
	Thriller(int serial, std::string name, int yearpub, int thrillerlevel);
	Thriller(int serial, std::string* p) :Thriller(serial, p[2], stoi(p[3]), stoi(p[4])) {};
	void print();

private:

	int thrillerlevel;
};

class Action : public Movie
{
public:
	Action(int serial, std::string name, int yearpub, int actionlevel);
	Action(int serial, std::string* p) :Action(serial, p[2], stoi(p[3]), stoi(p[4])){};
	void print();

private:

	int actionlevel;
};


