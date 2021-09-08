#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>
#include <cstdlib>
// #include <srand>

class Base
{
public:
    virtual ~Base() {}
};

class A
    :public Base
{
public:
    A()
    {   }
    ~A()
    {   }
};

class B
    :public Base
{
public:
    B()
    {   }
    ~B()
    {   }
};

class C
    :public Base
{
public:
    C()
    {   }
    ~C()
    {   }
};

void identify(Base* p);
void identify(Base& p);
Base *generate();

#endif