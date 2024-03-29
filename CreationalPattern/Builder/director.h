#ifndef _DIRECTOR_H_
#define _DIRECTOR_H_

#include "builder.h"

class Director
{
public:
    Director(AbstractBuilder* builder);
    ~Director();

    void construct();

private:
    AbstractBuilder* curBuilder;
};

#endif
