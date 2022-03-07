/* Assignment: 1
Author: Raphael Benoliel
*/
#include"SCEmazon.h"
#define MAX_CART 100
#pragma once


class Cart
{
public:
/////////	PUBLIC METHOD	/////////

	Cart();	//Ctor of class Cart
	
	void addItem(int serial, int amount);//method to add a item to the Shopping cart

	Cart(const Cart& other);//CCtor of class Cart

	 Cart operator+(const Cart& other)const;
	 Cart operator-(const Cart& other)const;
	 friend ostream& operator<<(ostream& os,const Cart& c);
/////	GET & SET METHOD	/////
	int getCartID()const { return cartID; } 
		

private:
	//private object of class Cart
	int itemSerial[MAX_CART];
	int amount[MAX_CART];
	int size=0;
	int cartID=0;
	static int cartIDgenerator ;
	int getIndexItem(int serial)const;
};
