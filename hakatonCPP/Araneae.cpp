//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Araneae.h"

Araneae::Araneae(int id,int weight, bool isOverland, bool arthropoda, int eyes)
:Ivertebrates(id,weight,isOverland,arthropoda)
{
    this->eyes = eyes;
}

Araneae::~Araneae()
{
}

void Araneae::print() const {
    Ivertebrates::print();
    cout<<"Number of eyes: "<<eyes<<endl;
}
