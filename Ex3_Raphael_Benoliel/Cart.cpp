/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Cart.h"

int Cart::cartIDgenerator = 0;

Cart::Cart()
{
	//Ctor set a new serial to a new cart 
	cartID = cartIDgenerator++;
}

void Cart::addItem(int serial, int amount)
{
	SCEmazon a;
	if (serial<0 || serial > a.maxSerial() || size>=MAX_CART)
		cout << "Error: Item with corresponding serial does not exist." << endl;
	else
	{
		this->itemSerial[size] = serial;
		this->amount[size++] = amount;
	}
}

Cart::Cart(const Cart& other) :Cart()
{
	for (int i = 0; i < size; i++)
	{
		this->itemSerial[i] = other.itemSerial[i];
	}
	for (int i = 0; i < size; i++)
	{
		this->amount[i] = other.amount[i];

	}
}

Cart Cart::operator+(const Cart& other) const
{
	Cart Union(*this);
	for (int i = 0; i < other.size; i++)
	{
		int result=getIndexItem(other.itemSerial[i]);
		if (result == -1)
			Union.addItem(other.itemSerial[i], other.amount[i]);
		else
		{
			if (other.amount[i] > Union.amount[result])
				Union.amount[result] = other.amount[i];
		}
	}
	return Union;
}

Cart Cart::operator-(const Cart& other) const
{
	Cart intersect;

	for (int i = 0; i <size; i++)
	{
		int result=other.getIndexItem(itemSerial[i]); // this.serial[i] == other.serial[result]  -> (same item)
		if (result != -1)
		{
			int newAmount;
			if (other.amount[result] < amount[i])newAmount = other.amount[result];
			else newAmount = amount[i];
			intersect.addItem(itemSerial[i], newAmount);
		}
	}
	return intersect;
}

int Cart::getIndexItem(int serial) const
{
	for (int i = 0; i < size; i++)
	{
		if(serial == this->itemSerial[i])
		return i;
	}
	return -1;
}

ostream& operator<<( ostream& os, const Cart& c)
{
	return os;
}
