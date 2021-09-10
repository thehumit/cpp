#ifndef DOG_HPP
#define DOG_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"

class Dog
    : public Animal
{
protected:
    std::string _type;
public:
    Dog(std::string type = "Dog");
    Dog(const Dog &cp);
    Dog&	operator= (const Dog &cp);
    void makeSound() const;
    std::string getType();
    ~Dog();
};

#endif