/* Assignment: 1
Author: Raphael Benoliel
*/
#include"Book.h"
#include"MusicAlbum.h"
#include"Movie.h"

#include<iostream>

#define MAX_ITEMS 200
using namespace std;
#pragma once
class SCEmazon
{
public:
	SCEmazon();
	static int maxSerial() { return serial; }
	void creatItem();
	static string* separate(string& parameters);
	static int genrateSerial() { return serial++; }
	int findSerial(int serial)const;
	void removeItem();
	bool removeItem(int serial);
	void printAll();
	void printItem(int serial);
	~SCEmazon();

private:
	static int serial;
	int sizeItem = 0;
	Item** items = new Item * [MAX_ITEMS];

};
