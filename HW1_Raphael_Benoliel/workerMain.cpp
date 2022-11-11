/* Assignment: 1
Author: Raphael Benoliel */
#include"Worker.h"
#include <iomanip>
using namespace std;
//Main of class Worker
int main()
{
	char name[15];	
	long ID;
	double salary_per_hour;
	int num_regular_hour;
	int extra_hours;

	cout << "Enter name: " << endl;
	cin >> name;
	cout << "Enter ID: " << endl;
	cin >> ID;
	cout << "Enter salary per hour: " << endl;
	cin >> salary_per_hour;
	cout << "Enter number of regular hours: " << endl;
	cin >> num_regular_hour;
	cout << "Enter number of extra hours: " << endl;
	cin >> extra_hours;
	Worker m(name, ID, salary_per_hour, num_regular_hour, extra_hours);//calling Ctor with parameters to build a worker
	cout << "Salatry is " <<fixed << showpoint << setprecision(1) << m.My_Salary() << endl;
	cout << "Update regular hours: ";
	cin >> num_regular_hour;
	m.set_Num_of_normal_hour(num_regular_hour);
	m.printWorker();
	cout << "Update extra hours: ";
	cin >> extra_hours;
	m.set_overtime_hour(extra_hours);
	m.printWorker();
	cout << "Update salary per hour: ";
	cin >> salary_per_hour;
	m.set_Hourly_Wage(salary_per_hour);
	m.printWorker();

	return 0;
}