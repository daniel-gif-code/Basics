#ifndef PROTOTYPE_H
#define PROTOTYPE_H


class Prototype
{
public:
    virtual Prototype * clone();
    virtual ~Prototype();
protected:
     Prototype();
};
//派生自Prototype，实现其接口函数
 class ConcretePrototype1:public Prototype
 {
 public:
     ConcretePrototype1();//构造函数
     ~ConcretePrototype1();//析构函数
     ConcretePrototype1(const ConcretePrototype1&);//拷贝构造函数
     virtual Prototype* Clone() const;//实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
 };

 //派生自Prototype，实现其接口函数
 class ConcretePrototype2:public Prototype
 {
 public:
     ConcretePrototype2();//构造函数
     ~ConcretePrototype2();//析构函数
     ConcretePrototype2(const ConcretePrototype2&);//拷贝构造函数
     virtual Prototype* Clone() const;//实现基类定义的Clone接口，内部调用拷贝构造函数实现复制功能
 };

#endif // PROTOTYPE_H
