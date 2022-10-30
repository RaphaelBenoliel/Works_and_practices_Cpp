//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Dolphin.h"

Dolphin::Dolphin(int id,int weight, bool isOverland, char *bodyCover, bool predator, int teeth, bool isPoisonous,
                 char *waterType, bool isInBand)
                 : Vertebrates(id,weight,isOverland,bodyCover,predator),
                 Mammals(id,weight,isOverland,bodyCover,predator,teeth,isPoisonous),
                 Marine(id,weight,isOverland,bodyCover,predator,waterType){
    this->isInBand = isInBand;

}

Dolphin::~Dolphin()
{
}

void Dolphin::print() const {
    Mammals::print();
    cout<<"Water type of the animal: "<<waterType<<endl;
    if(isInBand)
        cout<<"Dolphin is in a band"<<endl;
    else
        cout<<"Dolphin is not in a band"<<endl;
}
