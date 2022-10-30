//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Ivertebrates.h"

Ivertebrates::Ivertebrates(int id,int weight, bool isOverland, bool arthropoda) : Animal(id,weight,isOverland)
{
    this->arthropoda = arthropoda;
}

void Ivertebrates::print() const {
    Animal::print();
    if(arthropoda)
        cout<<"is a arthropoda animal"<<endl;
    else
        cout<<"is not a arthropoda animal"<<endl;
}
Ivertebrates::~Ivertebrates()
{

}