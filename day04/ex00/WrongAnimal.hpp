#ifndef WORNGANIMAL_HPP
#define WORNGANIMAL_HPP

#include <string>
#include <iostream>

class WrongAnimal
{
protected:
    std::string _type;
public:
    WrongAnimal(std::string type = "WrongAnimal");
    WrongAnimal(const WrongAnimal &cp);
    WrongAnimal&	operator= (const WrongAnimal &cp);
    void makeSound() const;
    std::string getType();
    ~WrongAnimal();
};

WrongAnimal::WrongAnimal(std::string type) :
    _type(type)
{
    std::cout << "WrongAnimal constructor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &cp)
{
    (*this) = cp;
}

WrongAnimal&	WrongAnimal::operator= (const WrongAnimal &cp)
{
	// std::cout << "WrongAnimal assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

void WrongAnimal::makeSound() const
{
    std::cout << "I'm animal, i don't have sound." << std::endl;
}

std::string WrongAnimal::getType()
{
    return (this->_type);
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called." << std::endl;
}

#endif