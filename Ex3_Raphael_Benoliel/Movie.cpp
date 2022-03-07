/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Movie.h"

#include<iostream>

using namespace std;

Scifi::Scifi(int serial, std::string name, int yearpub, int scifilevel)
{
	this->serial = serial;
	this->name = name;
	this->yearPub = yearpub;
	this->scifilevel = clipLevel(scifilevel, 9);
	
}

Scifi::Scifi(int serial, std::string* p)
{
	this->serial = serial;
	this->name = p[2];
	this->yearPub = stoi(p[3]);
	this->scifilevel = clipLevel(stoi(p[4]), 9);
}

void Scifi::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Sci-Fi Movie> <" << getName() << "> <" <<  getYearPub() << "> <" << scifilevel << ">" << endl;
}

float Movie::getPrice() const
{
	return 20.0f;
}

int Movie::clipLevel(int level, int max) const
{
	if (level > max)
	{
		cout << "Level is update to " <<max<< endl;
		return max;
	}
	else if (level < 1)
	{
		cout << "Level is update to 1" << endl;
		return 1;
	}
	else
	{
		return level;
	}
}

Thriller::Thriller(int serial, std::string name, int yearpub, int thrillerlevel)
{
	this->serial = serial;
	this->name = name;
	this->yearPub = yearpub;
	this->thrillerlevel = clipLevel(thrillerlevel, 6);

}

void Thriller::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Thriller Movie> <" << getName() << "> <" << getYearPub() << "> <" << thrillerlevel << ">" << endl;
}



Action::Action(int serial, std::string name, int yearpub, int actionlevel)
{
	this->serial = serial;
	this->name = name;
	this->yearPub = yearpub;
	this->actionlevel = clipLevel(actionlevel, 5);
}

void Action::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Action Movie> <" << getName() << "> <" << getYearPub() << "> <" << actionlevel << ">" << endl;
}


