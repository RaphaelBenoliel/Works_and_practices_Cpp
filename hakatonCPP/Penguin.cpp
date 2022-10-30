//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Penguin.h"

Penguin::Penguin(int id,int weight, bool isOverland, char *bodyCover, bool predator, char *waterType, bool isFlying,int underWater)
: Vertebrates(id,weight,isOverland,bodyCover,predator), Marine(id,weight,isOverland,bodyCover,predator,waterType),
  Poultry(id,weight,isOverland,bodyCover,predator,isFlying) {
    this->underWater = underWater;
}

void Penguin::print() const {
    Marine::print();
    if(isFlying)
        cout<<"is a flying animal"<<endl;
    else
        cout<<"is not a flying animal"<<endl;
    cout<<"time under water: "<<underWater<<endl;
}

Penguin::~Penguin() {

}
