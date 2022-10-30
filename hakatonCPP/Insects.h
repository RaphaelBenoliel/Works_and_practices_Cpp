//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_INSECTS_H
#define CPPPROJECCT_INSECTS_H
#include "Ivertebrates.h"

class Insects : public Ivertebrates{
protected:
    int legs;
public:
    Insects(int id,int weight,bool isOverland, bool arthropoda, int legs);
    virtual ~Insects();
    virtual void print()const;
};


#endif //CPPPROJECCT_INSECTS_H
