/* Assignment: 1
Author: Raphael Benoliel
*/
#pragma once
#include "String.h"
#include "Date.h"

#define SECRETARY 0
#define EMPLOYED 1
#define MANAGER 2
#define DIRECTOR 3
#define MAX_STRING_SIZE 120

class Employee {
public:

    Employee(char(&name)[MAX_STRING_SIZE], char(&lastName)[MAX_STRING_SIZE], const Date& Bday, int id, const Date& firstDay, double Salary,int status);
    void print(const Date& toDay) const;
    Date getSeniority(const Date& toDay) const;
    int getAge(const Date& bDay) const;
    void promotion();
    int getID() const { return ID; }
    ~Employee();
private:

    String* name;
    String* lastName;
    const Date Bday;
    const int ID;
    const Date firstDay;
    double Salary;
    int status;
};
