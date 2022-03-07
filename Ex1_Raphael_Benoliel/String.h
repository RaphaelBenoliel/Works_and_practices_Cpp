/* Assignment: 1
Author: Raphael Benoliel
*/
#pragma once
#define MAX_STRING_SIZE 120

class String {
public:

    String();
    String(char(&str)[MAX_STRING_SIZE]);
    String(const String& s);
    ~String();
    void printString() const;
private:

    char* word;
};
