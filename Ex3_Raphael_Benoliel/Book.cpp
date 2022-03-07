/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Book.h"
#include<iostream>

using namespace std;
///////Class ChildBook METHOD://////
ChildBook::ChildBook(int serial, std::string bookname, int yearpub, int pagenum, int minage)
{
	this->serial = serial;
	this->name = bookname;
	this->pageNum = pagenum;
	this->yearPub = yearpub;
	this->minAge = minage;

}

ChildBook::ChildBook(int serial, std::string* p)
{
	this->serial = serial;
	this->name = p[1];
	this->pageNum = stoi(p[2]);
	this->yearPub = stoi(p[3]);
	this->minAge = stoi(p[4]);

}

float ChildBook::getPrice() const
{
	return normalizePrice(((float)pageNum) / 2);
}
void ChildBook::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Children Book> <" << getName() << "> <" << getPageNum() << "> <" << getYearPub() << "> <" << minAge << ">" << endl;
}
///////Class ReadBook METHOD://////
ReadBook::ReadBook(int serial, std::string bookname, int yearpub, int pagenum,std::string genre)
{
	this->serial = serial;
	this->name = bookname;
	this->pageNum = pagenum;
	this->yearPub = yearpub;
	this->genre = genre;
}

ReadBook::ReadBook(int serial, std::string* p)
{
	this->serial = serial;
	this->name = p[1];
	this->pageNum = stoi(p[2]);
	this->yearPub = stoi(p[3]);
	this->genre = stoi(p[4]);
	
}


float ReadBook::getPrice() const
{
	return normalizePrice(((float)pageNum) * 2);
}

void ReadBook::print()
{
	cout << "<" << getSerial() << "> <" << getPrice() << "> <Reading Book> <" << getName() << "> <" << getPageNum() << "> <" << getYearPub() << "> <" << genre << ">" << endl;
}

Book::~Book()
{

}
