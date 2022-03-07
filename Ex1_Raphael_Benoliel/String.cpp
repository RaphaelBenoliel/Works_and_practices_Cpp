/* Assignment: 1
Author: Raphael Benoliel
*/
#include "String.h"

#include<iostream>
using namespace std;

String::String(char(&str)[MAX_STRING_SIZE]) 
{
    word = new char[MAX_STRING_SIZE];
    int i = 0;
    for (; str[i]; ++i) 
    {
        word[i] = str[i];
    }
    word[i] = 0;
}

String::String(const String& s) 
{
    *this = s;
}

String::~String() { delete[] word; }

void String::printString() const 
{
    int i = 0;
    while (word[i]) {
        cout << word[i++];
    }
    cout << endl;
}

String::String() 
{
    word = new char[1];
    word[0] = '\0';
}
