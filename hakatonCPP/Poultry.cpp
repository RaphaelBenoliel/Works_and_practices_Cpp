//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Poultry.h"

Poultry::Poultry(int id,int weight, bool isOverland, char *bodyCover, bool predator, bool isFlying)
 :Vertebrates(id,weight,isOverland,bodyCover,predator)
{
    this->isFlying = isFlying;
}

void Poultry::print() const {
    Vertebrates::print();
    if(isFlying)
        cout<<"is a flying animal"<<endl;
    else
        cout<<"is not a flying animal"<<endl;
}

Poultry::~Poultry() {

}
