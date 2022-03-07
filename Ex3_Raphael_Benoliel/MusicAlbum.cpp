/* Assignment: 1
Author: Raphael Benoliel
*/
#include "MusicAlbum.h"
#include<iostream>

using namespace std;



MusicAlbum::MusicAlbum(int serial, std::string name, int yearpub)
{
	this->serial = serial;
	this->name = name;
	this->yearPub = yearpub;
}

MusicAlbum::MusicAlbum(int serial, std::string* p)
{
	this->name = p[1];
	this->yearPub = stoi(p[2]);
	this->serial = serial;
}

void MusicAlbum::addSong()
{//check if sizesong is max
	if (sizeSong < MAX_ALBUM)
	{
		
		cout << "Please enter song name :" << endl;
		string name;
		cin >> name;
		cout << "Please enter the duration of song :" << endl;
		int duration;
		cin >> duration;

		this->album[this->sizeSong++] = Song(name, duration);
	}
	else
		cout << "Unable to add song. The Music album is full." << endl;
}

void MusicAlbum::addSong(std::string& name, int duration)
{
	if (sizeSong < MAX_ALBUM)
	{
		this->album[this->sizeSong++] = Song(name, duration);
	}
	else
		cout << "Unable to add song. The Music album is full." << endl;
}

float MusicAlbum::getPrice() const
{
	return  normalizePrice((float)sizeSong * 5);
}

void MusicAlbum::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Music Album> <" << getName() << "> <" << getYearPub() << ">" << endl;
	for (int i = 0; i <MAX_ALBUM; i++)
	{
		cout << "\t<Song> <" << album[i].getNameSong()<< "> <" << album[i].getDuration() << ">" << endl;
	}
}

MusicAlbum::~MusicAlbum()
{
	delete[] album;
}

