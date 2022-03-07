/* Assignment: 1
Author: Raphael Benoliel
*/
#ifndef TARGIL3_ITEM_H
#define TARGIL3_ITEM_H

#define MAX_PRICE 100
#define MIN_PRICE 10
#include<string>


class Item
{
public:
	
	int getSerial()const { return serial; }
	virtual float getPrice()const = 0;
	std::string getName()const { return name; }
	int getYearPub()const { return yearPub; }
	virtual void print() = 0;
protected:

	int serial=0;
	std::string name;
	int yearPub=0;
	float normalizePrice(float calculated)const;
};

#endif


