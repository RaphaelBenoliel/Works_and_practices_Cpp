/* Assignment: 1
Author: Raphael Benoliel */
#define _CRT_SECURE_NO_WARNINGS
#include "Worker.h"
using namespace std;

Worker::Worker(char name[], long id, double hourlyWage, int numOfNormalHour, int overtimeHour)
{
	strcpy(this->name, name);
	this->ID = id;
	this->hourly_Wage = hourlyWage;
	this->Num_of_normal_hour = numOfNormalHour;
	this->overtime_hour = overtimeHour;
}

void Worker::set_Hourly_Wage(double hourlyWage)
{
	this->hourly_Wage = hourlyWage;
}

void Worker::set_Num_of_normal_hour(int numOfNormalHour)
{
	this->Num_of_normal_hour = numOfNormalHour;
}

void Worker::set_overtime_hour(int overtimeHour)
{
	this->overtime_hour = overtimeHour;
}

double Worker::My_Salary()
{
	double tmp;
	tmp = hourly_Wage * Num_of_normal_hour + (overtime_hour * hourly_Wage * 1.5);
	return tmp;
}

void Worker::printWorker()
{
	cout << name << ", "<<ID<<", " << hourly_Wage << ", " << Num_of_normal_hour << ", " << overtime_hour << ", " << My_Salary() << endl;
}
