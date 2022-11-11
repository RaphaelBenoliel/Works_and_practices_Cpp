/* Assignment: 1
Author: Raphael Benoliel */
#include<iostream>

#pragma once
class Worker
{
private:
	char name[15];
	long ID;
	double hourly_Wage;
	int Num_of_normal_hour;
	int overtime_hour;
public:
	//Constructor
	
	Worker(char name[], long id, double hourlyWage, int numOfNormalHour, int overtimeHour);

	//get and set function
	char get_Name() { return *name; }
	long get_ID() { return ID; }
	double get_Hourly_Wage() { return hourly_Wage; }
	int get_Num_of_normal_hour() { return Num_of_normal_hour; }
	int get_overtime_hour() { return overtime_hour; }
	void set_Hourly_Wage(double hourlyWage);
	void set_Num_of_normal_hour(int numOfNormalHour);
	void set_overtime_hour(int overtimeHour);
	
	double My_Salary();
	void printWorker();


};