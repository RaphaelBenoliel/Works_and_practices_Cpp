//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_DOLPHIN_H
#define CPPPROJECCT_DOLPHIN_H
#include "Mammals.h"
#include "Marine.h"

class Dolphin :public Mammals,public Marine{
private:
    bool isInBand;
public:
    Dolphin(int id,int weight,bool isOverland,char *bodyCover,bool predator,int teeth,bool isPoisonous,char *waterType, bool isInBand);
    virtual ~Dolphin();
    virtual void print()const;

};


#endif //CPPPROJECCT_DOLPHIN_H
