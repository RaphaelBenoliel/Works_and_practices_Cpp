//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_MAMMALS_H
#define CPPPROJECCT_MAMMALS_H
#include"Vertebrates.h"

class Mammals: public virtual Vertebrates {
protected:
    int teeth;
    bool isPoisonous;
public:
    Mammals(int id,int weight,bool isOverland,char *bodyCover,bool predator,int teeth,bool isPoisonous);
    virtual ~Mammals();
    virtual void print()const;
};


#endif //CPPPROJECCT_MAMMALS_H
