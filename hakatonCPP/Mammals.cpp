//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Mammals.h"

Mammals::Mammals(int id,int weight, bool isOverland, char *bodyCover, bool predator, int teeth, bool isPoisonous)
:Vertebrates(id,weight,isOverland,bodyCover,predator)
{
    this->teeth= teeth;
    this->isPoisonous = isPoisonous;
}

Mammals::~Mammals() {

}

void Mammals::print() const {
    Vertebrates::print();
    cout<<"Number of teeth: "<<teeth<<endl;
    if(isPoisonous)
        cout<<"is a poisonous animal"<<endl;
    else
        cout<<"is not a poisonous animal"<<endl;
}
