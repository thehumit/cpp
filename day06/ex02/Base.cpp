#include "Base.hpp"

Base *generate()
{
    int a = rand() % 3;
    if (a == 0)
        return (new A());
    if (a == 1)
        return (new B());
    if (a == 2)
        return (new C());
    return (NULL);
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "Type A crated." << std::endl;
    if (dynamic_cast<B*>(p))
        std::cout << "Type B crated." << std::endl;
    if (dynamic_cast<C*>(p))
        std::cout << "Type C crated." << std::endl;
}

void identify(Base& p)
{
    try
    {
        A a = dynamic_cast<A&>(p);
        std::cout << "Type A crated." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        B b =dynamic_cast<B&>(p);
        std::cout << "Type B crated." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        C c = dynamic_cast<C&>(p);
        std::cout << "Type C crated." << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}