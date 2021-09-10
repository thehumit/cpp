#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <string>
#include <iostream>

class Animal
{
protected:
    std::string _type;
public:
    Animal(std::string type = "animal");
    Animal(const Animal &cp);
    Animal&	operator= (const Animal &cp);
    virtual void makeSound() const;
    virtual std::string getType();
    virtual ~Animal();
};



#endif