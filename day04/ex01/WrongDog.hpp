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

WrongDog::WrongDog(std::string type) :
    _type(type)
{
    std::cout << "WrongDog constructor called." << std::endl;
    this->_type = "WrongDog";
}

WrongDog::WrongDog(const WrongDog &cp)
{
    (*this) = cp;
}

WrongDog&	WrongDog::operator= (const WrongDog &cp)
{
	// std::cout << "WrongDog assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

void WrongDog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

std::string WrongDog::getType()
{
    return (this->_type);
}

WrongDog::~WrongDog()
{
    std::cout << "WrongDog destructor called." << std::endl;
}

#endif