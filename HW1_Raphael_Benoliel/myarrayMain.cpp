/* Assignment: 1
Author: Raphael Benoliel */
#include"MyArray.h"
#include <iomanip>
using namespace std;

int main()
{
	float* parameter_arr, * zero_arr;
	int len_parameter = 0, len_zero = 0,index;
	float num=0.0;
	
	cout << "In this program there are 4 arrays created by different constructors: empty_arr, zero_arr, parameters_arr, copied_arr." << endl;
	cout << "Enter length of zero_arr: ";
	cin >> len_zero;
	cout << "Enter length of parameter_arr: ";
	cin >> len_parameter;
	parameter_arr = new float[len_parameter + 1];
	cout << "Enter elements of parameters_arr: ";
	for (int i = 0; i < len_parameter; i++)
	{
		cin >> parameter_arr[i];
	}
	
	MyArray empty;
	MyArray zero(len_zero);
	MyArray par(parameter_arr, len_parameter);
	MyArray copied(zero);
	empty.printMyArray();
	cout << "zero_arr="<<fixed<<showpoint<<setprecision(1);
	zero.printMyArray();
	cout << "parameters_arr=";
	par.printMyArray();
	cout << "copied_arr=";
	copied.printMyArray();

	cout << "Enter new length of zero_arr: ";
	cin >> len_zero;
	zero_arr = new float[len_zero + 1];
	cout << "Enter elements of zero_arr: ";
	for (int i = 0; i < len_zero; i++)
	{
		cin >> zero_arr[i];
	}
	zero.NewArray(zero_arr, len_zero);

	cout << "Changing an element in zero_arr: " << endl;
	cout << "Enter index: ";
	cin >> index;
	cout << "Enter element: ";
	cin >> num;
	zero.ChangeOneElement(num, index);

	cout << "Changing an element in parameters_arr: " << endl;
	cout << "Enter index: ";
	cin >> index;
	cout << "Enter element: ";
	cin >> num;
	par.ChangeOneElement(num, index);

	cout << "Changing an element in copied_arr: " << endl;
	cout << "Enter index: ";
	cin >> index;
	cout << "Enter element: ";
	cin >> num;
	copied.ChangeOneElement(num, index);

	empty.printMyArray();
	cout << "zero_arr=";
	zero.printMyArray();
	cout << "parameters_arr=";
	par.printMyArray();
	cout << "copied_arr=";
	copied.printMyArray();

	cout << "Enter index: ";
	cin >> index;
	num = 0.0;
	cout << "empty_arr[" << index << "]="; 
	empty.ReturnElement(num, index);
	cout << "zero_arr[" << index << "]=";
	zero.ReturnElement(num, index);
	cout << "parameters_arr[" << index << "]=";
	par.ReturnElement(num, index);
	cout << "copied_arr[" << index << "]=";
	copied.ReturnElement(num, index);
	
	cout << "empty_arr: Sum=" << empty.SumOfArray() << " ,length=" << empty.getlengthArray() << endl;
	cout << "zero_arr: Sum=" << zero.SumOfArray() << " ,length=" << zero.getlengthArray() << endl;
	cout << "parameters_arr: Sum=" << par.SumOfArray() << " ,length=" << par.getlengthArray() << endl;
	cout << "copied_arr: Sum=" << copied.SumOfArray() << " ,length=" << copied.getlengthArray() << endl;
	
	return 0;
}