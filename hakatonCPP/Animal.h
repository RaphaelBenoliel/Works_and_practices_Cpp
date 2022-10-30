//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_ANIMAL_H
#define CPPPROJECCT_ANIMAL_H
#include<iostream>

using namespace std;

class Animal {
protected:
    int weight;
    bool isOverland;
    int id;
public:
    Animal();
    Animal(int id,int weight,bool isOverland);
    Animal(const Animal& other);
    virtual ~Animal()=0;
    virtual void print()const;
    int getID()const { return id; }
};


#endif //CPPPROJECCT_ANIMAL_H
