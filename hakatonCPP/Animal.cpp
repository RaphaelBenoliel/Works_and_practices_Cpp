//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Animal.h"

Animal::Animal()
{
    weight = 0;
    isOverland = true;
}

Animal::Animal(int id,int weight, bool isOverland) {
   
    this->id = id;
    this->weight = weight;
    this->isOverland = isOverland;

}

Animal::Animal(const Animal& other)
{

    this->id = other.id;
    this->weight = other.weight;
    this->isOverland = other.isOverland;
}

Animal::~Animal()
{
}

void Animal::print() const {
    cout << "Animal ID is: " << id << endl;
    cout<<"weight: "<<weight<<endl;
    if(isOverland)
        cout<<"is land animal"<<endl;
    else
        cout<<"is marine animal"<<endl;
}

