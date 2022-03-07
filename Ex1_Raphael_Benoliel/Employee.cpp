/* Assignment: 1
Author: Raphael Benoliel
*/
#include "Employee.h"

#include<iostream>
using namespace std;


Employee::Employee(char(&name)[MAX_STRING_SIZE], char(&lastName)[MAX_STRING_SIZE], const Date& Bday, int id, const Date& firstDay,double Salary, int status)
    : status(status), Salary(Salary), Bday(Bday), firstDay(firstDay), ID(id) 
{
    this->name = new String(name);
    this->lastName = new String(lastName);
}

void Employee::print(const Date& toDay) const 
{
    cout << "----------------------------------------------------------------------\n";
    cout << "Name: ";
    name->printString();
    cout << "Last name: ";
    lastName->printString();
    switch (status) {
    case SECRETARY:
        cout << "Status : Secretary" << endl;
        break;
    case EMPLOYED:
        cout << "Status : Employed" << endl;
        break;
    case MANAGER:
        cout << "Status : Manager" << endl;
        break;
    case DIRECTOR:
        cout << "Status : Director" << endl;
        break;
    }
    cout << "Salary: " << Salary << endl;
    Date seniority = getSeniority(toDay);
    cout << "seniority: years: " << seniority.getYear() << " months: " << seniority.getMonth() << " days: "<< seniority.getDay() << endl;
    cout << "Age: " << getAge(toDay) << endl;
}

Date Employee::getSeniority(const Date& toDay) const 
{
    return firstDay.difference(toDay);
}

int Employee::getAge(const Date& toDay) const 
{
    int age = Bday.difference(toDay).getYear();
    return age;
}

void Employee::promotion() 
{
    if (status < DIRECTOR)
    {
        status++;
        Salary *= 1.1;
    }
    else
        Salary *= 2;
}

Employee::~Employee() 
{
    delete name;
    delete lastName;
}
