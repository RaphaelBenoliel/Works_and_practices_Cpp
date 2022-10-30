//
// Created by Raphael Benoliel on 09/06/2022.
//

#ifndef CPPPROJECCT_ARANEAE_H
#define CPPPROJECCT_ARANEAE_H

#include "Ivertebrates.h"
class Araneae: public Ivertebrates {
protected:
    int eyes;
public:
    Araneae(int id,int weight,bool isOverland, bool arthropoda, int eyes);
    virtual ~Araneae();
    virtual void print()const;



};


#endif //CPPPROJECCT_ARANEAE_H
