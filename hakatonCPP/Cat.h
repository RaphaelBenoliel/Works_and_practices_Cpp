//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_CAT_H
#define CPPPROJECCT_CAT_H
#include"Mammals.h"

class Cat:public Mammals {
private:
    bool isWild;
public:
    Cat(int id,int weight,bool isOverland,char *bodyCover,bool predator,int teeth,bool isPoisonous, bool isWild);
    virtual ~Cat();
    virtual void print()const;
};


#endif //CPPPROJECCT_CAT_H
