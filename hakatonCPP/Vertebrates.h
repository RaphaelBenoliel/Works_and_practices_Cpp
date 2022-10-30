//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_VERTEBRATES_H
#define CPPPROJECCT_VERTEBRATES_H
#define _CRT_SECURE_NO_WARNINGS
#include"Animal.h"
class Vertebrates:public Animal {
protected:
    char *bodyCover;
    bool predator;
public:
    Vertebrates();
    Vertebrates(int id,int weight,bool isOverland,char *bodyCover,bool predator);
    Vertebrates(const Vertebrates& other);
    virtual ~Vertebrates();
    virtual void print()const;


};


#endif //CPPPROJECCT_VERTEBRATES_H
