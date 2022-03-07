/* Assignment: 1
Author: Raphael Benoliel
*/
#include "DataBase.h"

#include <iostream>
using namespace std;

Employee* DataBase::getEmployee(int index) const 
{
    Node* Current = head;
    while (Current) 
    {
        if (Current->getEmplo()->getID() == index)
            return Current->getEmplo();
        Current = Current->getNext();
    }
    return nullptr;
}

void DataBase::addEmployee(Employee& newEmplo) 
{
    CurrentEmpl++;
    Node* newNode = new Node(&newEmplo, nullptr);
    if (head == nullptr) {
        head = newNode;
        return;
    }
    Node* Current = head;
    while (Current->getNext()) {
        Current = Current->getNext();
    }
    Current->next = newNode;
}

Employee* DataBase::removeEmployee(int i)
{
    Employee* remove = nullptr;
    Node* Current = head;
    Node* last = nullptr;
    while (Current) {
        if (Current->getEmplo()->getID() == i) {
            Node* toDel = Current;
            remove = Current->getEmplo();
            if (Current == head)
                head = head->next;
            else
                last->next = Current->next;
            delete toDel;
            Current = last;
        }
        last = Current;
        if (Current)Current = Current->getNext();
    }
    return remove;
}

void DataBase::print(const Date& today) const
{
    Node* Current = head;
    cout << "\t\tAll employees in DataBase" << endl;
    while (Current)
    {
        Current->getEmplo()->print(today);
        Current = Current->getNext();
    }
}

DataBase::~DataBase() 
{
    Node* Current = head;
    while (Current) 
    {
        Node* temp = Current->next;
        delete Current;
        Current = temp;
    }
}
