#include "singleton.h"
Singleton * Singleton::instance_singleton=new Singleton();
Singleton::Singleton()
{
    i = 0;
}

Singleton *Singleton::getInstance()
{
//    if(instance_singleton == nullptr){
//       instance_singleton = new Singleton();
//    }
    return  instance_singleton;
}

void Singleton::printfuc()
{
    qDebug() << i;
    i++;
}

Singleton::~Singleton()
{
    qDebug() << "delete Singleton";
}
