#include "product.h"
#include <iostream>

using namespace std;

Product::~Product()
{
    cout << "delete Product"<<endl;
}

Product::Product()
{

}

ConcreteProduct::ConcreteProduct()
{
    cout << "ConcreteProduct... " <<endl;
}

ConcreteProduct::~ConcreteProduct()
{
    cout << "delete ConcreteProduct"<<endl;
}



ConcreteProductB::ConcreteProductB()
{
     cout << "ConcreteProductB... " <<endl;
}

ConcreteProductB::~ConcreteProductB()
{
    cout << "delete ConcreteProductB... " <<endl;
}
