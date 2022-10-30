//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_PENGUIN_H
#define CPPPROJECCT_PENGUIN_H

#include "Marine.h"
#include"Poultry.h"
class Penguin : public Marine, public Poultry{
private:
    int underWater;
public:
    Penguin(int id,int weight,bool isOverland,char *bodyCover,bool predator,char *waterType,bool isFlying,int underWater);
    virtual ~Penguin();
    virtual void print()const;




};


#endif //CPPPROJECCT_PENGUIN_H
