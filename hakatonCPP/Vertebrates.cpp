
#include "Vertebrates.h"

Vertebrates::Vertebrates()
{
    bodyCover = nullptr;
    predator = true;
}

Vertebrates::Vertebrates(int id,int weight, bool isOverland, char *bodyCover, bool predator): Animal(id,weight,isOverland)
{
    this->bodyCover=new char[strlen(bodyCover)+1];
    strcpy(this->bodyCover,bodyCover);
    this->predator = predator;
}

Vertebrates::Vertebrates(const Vertebrates& other):Animal(other)
{
    this->bodyCover = new char[strlen(other.bodyCover) + 1];
    strcpy(this->bodyCover, other.bodyCover);
    this->predator = other.predator;
}

Vertebrates::~Vertebrates() {
    delete[] bodyCover;
}

void Vertebrates::print() const {
    Animal::print();
    cout<<"body cover: "<<bodyCover<<endl;
    if(predator)
        cout<<"is a predator animal"<<endl;
    else
        cout<<"is not a predator animal"<<endl;
}
