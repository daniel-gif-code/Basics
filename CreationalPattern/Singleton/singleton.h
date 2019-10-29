#ifndef SINGLETON_H
#define SINGLETON_H
#include <QDebug>

class Singleton
{
public:
    static Singleton * getInstance();
    void printfuc();
    ~Singleton();
private:
    Singleton();
    static Singleton * instance_singleton;
    int i;
};


#endif // SINGLETON_H
