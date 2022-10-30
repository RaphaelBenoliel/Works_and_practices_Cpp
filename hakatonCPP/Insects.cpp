//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Insects.h"

Insects::Insects(int id,int weight, bool isOverland, bool arthropoda, int legs)
: Ivertebrates(id,weight,isOverland,arthropoda) {
    this->legs = legs;
}

void Insects::print() const {
    Ivertebrates::print();
    cout<<"Number of legs: "<<legs<<endl;
}

Insects::~Insects() {

}
