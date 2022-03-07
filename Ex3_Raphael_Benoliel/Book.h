/* Assignment: 1
Author: Raphael Benoliel
*/
#pragma once
#include"Item.h"

class Book:public Item //Class Book is Inheritance from class Item. 
{/////////	PUBLIC METHOD	/////////
public:
	int getPageNum() { return pageNum; }
	virtual void print() = 0;
	~Book();

protected:
	int pageNum=0;
	
};


class ChildBook:public Book //Class ChildBook is Inheritance from class Book. 
{
public:

	//Ctor of class ChildBook
	ChildBook(int serial, std::string bookname, int yearpub  ,int pagenum, int minage);
	ChildBook(int serial, std::string* p);
	float getPrice()const;
	void print();
private:
	int minAge;
};
class ReadBook:public Book//Class ReadBook is Inheritance from class Book.
{
public:
	//Ctor of class ReadBook
	ReadBook(int serial, std::string bookname, int yearpub, int pagenum, std::string genre);
	ReadBook(int serial, std:: string* p);
	float getPrice()const;
	void print();
private:
	std::string genre;

};
