//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_MARINE_H
#define CPPPROJECCT_MARINE_H
#include"Vertebrates.h"

class Marine: public virtual Vertebrates{
protected:
    char *waterType;
public:
    Marine(int id,int weight,bool isOverland,char *bodyCover,bool predator,char *waterType);
    virtual ~Marine();
    virtual void print()const;

};


#endif //CPPPROJECCT_MARINE_H
