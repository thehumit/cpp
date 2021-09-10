#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP

#include <string>
#include <iostream>
#include "WrongAnimal.hpp"

class WrongDog
    : public WrongAnimal
{
protected:
    std::string _type;
public:
    WrongDog(std::string type = "WrongDog");
    WrongDog(const WrongDog &cp);
    WrongDog&	operator= (const WrongDog &cp);
    void makeSound() const;
    std::string getType();
    ~WrongDog();
};

#endif