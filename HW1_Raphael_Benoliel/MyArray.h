/* Assignment: 1
Author: Raphael Benoliel */
#pragma once
#include<iostream>
#include <iomanip>
class MyArray
{
private:
	float* arr;
	int length;

public:
	////Constuctors of class MyAarray\\\\ 
	MyArray();
	MyArray(float* arr, int length);
	MyArray(int length);
	MyArray(const MyArray& other);
	~MyArray();
	////public bool method of class MyAarray\\\\ 
	bool NewArray(float* arr, int length);
	bool ChangeOneElement(float num, int index);
	bool ReturnElement(float &arr, int index);

	int getlengthArray()const;
	float SumOfArray()const;
	void printMyArray();
};

