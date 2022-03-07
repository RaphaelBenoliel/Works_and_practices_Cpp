/* Assignment: 1
Author: Raphael Benoliel
*/
#pragma once
#include"Item.h"
#define MAX_ALBUM 20

class Song
{
public:

	Song(std::string name, int duration) :nameSong(name), duration(duration) {}
	std::string getNameSong() { return nameSong; }
	int getDuration() { return duration; }
	Song() : Song("", 0){}

private:
	std::string nameSong;
	int duration;
};

class MusicAlbum:public Item
{
public:

	MusicAlbum(int serial, std::string name, int yearpub);
	MusicAlbum(int serial, std::string* p);
	void addSong();
	void addSong(std::string& name, int duration);
	float getPrice()const;
	void print();
	~MusicAlbum();

private:

	Song* album= new Song[MAX_ALBUM];
	int sizeSong=0;

};



