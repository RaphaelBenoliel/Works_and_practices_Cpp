//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_BEETLE_H
#define CPPPROJECCT_BEETLE_H

#include"Insects.h"
class Beetle: public Insects{
private:
    int blackDots;
public:
    Beetle(int id, int weight, bool isOverland, bool arthropoda, int legs, int blackDots);
    ~Beetle();
    virtual void print()const;


};


#endif //CPPPROJECCT_BEETLE_H
