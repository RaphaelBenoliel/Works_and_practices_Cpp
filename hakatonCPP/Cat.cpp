
#include "Cat.h"

Cat::Cat(int id,int weight, bool isOverland, char *bodyCover, bool predator, int teeth, bool isPoisonous, bool isWild)
    :Mammals(id,weight,isOverland,bodyCover,predator,teeth,isPoisonous) 
{
    this->isWild = isWild;
}

Cat::~Cat() {
}

void Cat::print() const {
    Mammals::print();
    if(isWild)
        cout<<"is a wild animal"<<endl;
    else
        cout<<"is not a wild animal"<<endl;
}
