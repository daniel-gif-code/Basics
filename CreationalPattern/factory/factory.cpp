#include "factory.h"
#include <iostream>
using namespace std;
Factory::~Factory()
{
     cout << "delete Factory"<<endl;
}

Factory::Factory()
{

}

ConcreteFactory::~ConcreteFactory()
{
      cout << "delete ConcreteFactory"<<endl;
}

ConcreteFactory::ConcreteFactory()
{
    cout << "ConcreteFactory..." <<endl;
}


Product *ConcreteFactory::CreateProduct(int type)
{
    if(type == 0){
        return new ConcreteProduct();
    }
    else{
        return new ConcreteProductB();
    }
}
