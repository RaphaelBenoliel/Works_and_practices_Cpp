//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_POULTRY_H
#define CPPPROJECCT_POULTRY_H

#include"Vertebrates.h"

class Poultry :public virtual Vertebrates {
protected:
    bool isFlying;
public:
    Poultry(int id,int weight,bool isOverland,char *bodyCover,bool predator,bool isFlying);
    virtual ~Poultry();
    virtual void print()const;


};


#endif //CPPPROJECCT_POULTRY_H
