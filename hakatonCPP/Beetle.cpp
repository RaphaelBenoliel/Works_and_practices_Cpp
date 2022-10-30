//
// Created by Raphael Benoliel on 09/06/2022.
//

#include "Beetle.h"

Beetle::Beetle(int id, int weight, bool isOverland, bool arthropoda, int legs, int blackDots)
 :Insects(id, weight,isOverland,arthropoda,legs) {
    this->blackDots = blackDots;
}

Beetle::~Beetle() {

}

void Beetle::print() const {
    Insects::print();
    cout<<"the beetle has "<<blackDots<<" black dots"<<endl;
}
