/* Assignment: 1
Author: Raphael Benoliel */
#include "MyArray.h"

using namespace std;

MyArray::MyArray()//default Ctor
{
	this->arr = NULL;
	this->length = 0;
}

MyArray::MyArray(float* arr, int length)//Ctor
{
	if (arr == NULL)
	{
		this->arr = NULL;
		this->length = 0;
	}
	else
		this->arr = new float[length];
	if (this->arr == NULL)// Check if memory allocation was successful
		length = 0;
	else
	{
		this->length = length;
		for (int i = 0; i < length; i++)
		{
			this->arr[i] = arr[i];
		}
	}
}

MyArray::MyArray(int length)
{
	this->length = length;
	this->arr = new float[length];
	if (!this->arr)
		return;
	for (int i = 0; i < length; i++)
	{
		this->arr[i] = 0.0;
	}
	
}

MyArray::MyArray(const MyArray& other)//Copy Constructor
{
	if (other.length == 0)
	{
		length = 0;
		arr = NULL;
		return;
	}
	arr = new float[other.length + 1];
	if (this->arr == NULL)
		length = other.length;
	else
	{
		length = other.length;
		for ( int i = 0; i < length; i++)
		{
			arr[i] = other.arr[i];
		}
	}
}

MyArray::~MyArray()//Destructor
{
	delete[] this->arr;
}

bool MyArray::NewArray(float* arr, int length)
{
	if (this->arr)
		delete[] this->arr;
	if (arr == NULL)
	{
		this->length = 0;
		return true;
	}
	else
		this->arr = new float[length];
		if (this->arr == NULL)
		{
			length = 0;
			return false;
		}
		this->length = length;
		for (int i = 0; i < length; i++)
		{
			this->arr[i] = arr[i];
		}
		return true;
}
bool MyArray::ChangeOneElement(float num, int index)
{
	if(index>this->length)//if the index parameter is greater than *this length
	{ 
		cout << "Bad index" << endl;
		return false;
	}
	
		cout << "Changed" << endl;
		arr[index] = num;
		return true;
	
}

bool MyArray::ReturnElement(float& arr, int index)
{
	if(index > this->length)
	{ 
		cout << "Bad index" << endl;
		return false;
	}
	 arr = this->arr[index];
	 cout << arr << endl;;
		return true ;
}

int MyArray::getlengthArray() const
{
	int len = this->length;
	return len;
}

float MyArray::SumOfArray()const
{
	float result = 0.0;
	for (int i = 0; i < length; i++)
	{
		result +=this->arr[i];
	}
	return result;
}

void MyArray::printMyArray()
{
	if (this->length == NULL)
		cout << "empty_arr=()" << endl;
	else
	{ 
		cout<< "(";
		for (int i = 0; i < this->length; i++)
		{
			if(i < this->length-1)
				cout << arr[i] << ", ";
			else
			{
				cout << arr[i] << ")" << endl;
			}
		}
	}
}
