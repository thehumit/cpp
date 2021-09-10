#include "Dog.hpp"

Dog::Dog(std::string type) :
    _type(type)
{
    std::cout << "Dog constructor called." << std::endl;
}

Dog::Dog(const Dog &cp)
{
    (*this) = cp;
}

Dog&	Dog::operator= (const Dog &cp)
{
	// std::cout << "Dog assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Woof Woof!" << std::endl;
}

std::string Dog::getType()
{
    return (this->_type);
}

Dog::~Dog()
{
    std::cout << "Dog destructor called." << std::endl;
}
