/* Assignment: 1
Author: Raphael Benoliel
*/
#include"Employee.h"

class DataBase
{
public:
	//method of DataBase class
	DataBase() :head(nullptr), CurrentEmpl(0) {}
	Employee* getEmployee(int index)const;
	void addEmployee(Employee& newEmplo);
	Employee* removeEmployee(int i);
	void print(const Date& today)const;
	~DataBase();
private:
	//class for linked list
	class Node
	{
	public:
		//fields for Node class
		Employee* emplo;
		Node* next;
		//important method for Node class 
		Employee* getEmplo()const { return emplo; }
		Node* getNext()const { return next; }
		Node(Employee* e, Node* n) :emplo(e), next(n) {}
	};//end of Node class
	//fields for dataBase class
	Node* head;
	int CurrentEmpl;
};
