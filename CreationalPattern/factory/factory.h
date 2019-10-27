#ifndef FACTORY_H
#define FACTORY_H
#include "product.h"

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product * CreateProduct(int type) = 0;
protected:
    Factory();
private:
};

class ConcreteFactory:public Factory
{
public:
    ~ConcreteFactory();
    ConcreteFactory();
    virtual Product * CreateProduct(int type);
protected:
private:
};

#endif // FACTORY_H
