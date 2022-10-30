//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_IVERTEBRATES_H
#define CPPPROJECCT_IVERTEBRATES_H
#include "Animal.h"

class Ivertebrates:public Animal {
protected:
    bool arthropoda;// פורקי רגליים
public:
    Ivertebrates(int id,int weight, bool isOverland, bool arthropoda);
    virtual ~Ivertebrates();
    virtual void print()const;


};


#endif //CPPPROJECCT_IVERTEBRATES_H

