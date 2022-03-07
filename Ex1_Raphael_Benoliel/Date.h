/* Assignment: 1
Author: Raphael Benoliel
*/
#pragma once

class Date
{
public:

	Date(int day,int month,int year);
	Date():Date(1, 1, 1){}
	Date(const Date& d);//copy constructor
	~Date();
	Date& operator=(const Date& d); //assignment operator
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay()const{return day;}
	int getMonth()const{return month;}
	int getYear()const{return year;}
	void printDate()const;
	Date difference(const Date& future)const;//date not change
	int dateToDays()const;
	Date daysToDate(int allDays)const;
private:

	int day,year,month;
	int days[13] = { -1,31,28,31,30,31,30,31,31,30,31,30,31 };
};



