//
// Created by Raphael Benoliel on 09/06/2022.
//
#define _CRT_SECURE_NO_WARNINGS
#include "Marine.h"

Marine::Marine(int id,int weight, bool isOverland, char *bodyCover, bool predator, char *waterType)
: Vertebrates(id,weight,isOverland,bodyCover,predator)
{
    this->waterType = new char[strlen(waterType)+1];
    strcpy(this->waterType,waterType);
}

Marine::~Marine() {
    delete[] waterType;

}

void Marine::print() const {
    Vertebrates::print();
    cout<<"Water type of the animal: "<<waterType<<endl;
}
