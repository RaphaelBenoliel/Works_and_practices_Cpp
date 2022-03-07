/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Date.h"
#include<iostream>
using namespace std;

Date::Date(int day, int month, int year):day(day),month(month),year(year)
{
	if (year < 0 || month < 1 || month > 12 || day< 1 || day > days[month])
	{ 
		cout << "Date not valid,date set to 1/1/2020" << endl;
		day = 1;
		month = 1;
		year = 2020;
	}
}

Date::Date(const Date& d):day(d.day),month(d.month),year(d.year){}

Date::~Date(){}

Date& Date::operator=(const Date& d)
{
    day = d.day;
    month = d.month;
    year = d.year;
    return *this;
}

void Date::setDay(int day)
{
    if (day<1 || day > days[month])
        cout << "day did not change" << endl;
    else
        this->day = day;
}

void Date::setMonth(int month)
{
    if (month < 1 || month > 12)
        cout << "month did not change" << endl;
    else
        this->month = month;
}

void Date::setYear(int year)
{
    if (year < 0)
        cout << "year did not change" << endl;
    else
        this->year = year;
}

void Date::printDate()const
{
	cout << day << "/" << month << "/" << year << endl;
}

Date Date::difference(const Date& future) const 
{
    int curDays = dateToDays();
    int futDays = future.dateToDays();
    int diff = futDays - curDays;
    if (diff < 0)
        diff *= -1;
    return daysToDate(diff);
}

int Date::dateToDays() const//function that transform a date into days.
{
    int allDays = day;
    allDays += year * 365;
    for (int i = 1; i < month; ++i)
        allDays += days[i];
    return allDays;
}

Date Date::daysToDate(int allDays) const//function that transform days into a date.
{
    int newYear = allDays / 365; 
    allDays %= 365; 
    int newMonth = 0; 
    for (int i = 1; i <= 12; ++i) {
        if (allDays - days[i] >= 0)//if we can remove a month from the allDays, we remove it and up the months.
        {
            newMonth++;
            allDays -= days[i];
        }
    }
    int newDay = allDays;

    Date d(1, 1, 1);
    d.day = newDay, d.month = newMonth, d.year = newYear;
    return d;
}
