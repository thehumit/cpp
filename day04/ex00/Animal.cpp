#include "Animal.hpp"

Animal::Animal(std::string type) :
    _type(type)
{
    std::cout << "Animal constructor called." << std::endl;
}

Animal::Animal(const Animal &cp)
{
    (*this) = cp;
}

Animal&	Animal::operator= (const Animal &cp)
{
	// std::cout << "Animal assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

void Animal::makeSound() const
{
    std::cout << "I'm animal, i don't have sound." << std::endl;
}

std::string Animal::getType()
{
    return (this->_type);
}

Animal::~Animal()
{
    std::cout << "Animal destructor called." << std::endl;
}