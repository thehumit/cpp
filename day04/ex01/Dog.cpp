#include "Dog.hpp"

Dog::Dog(std::string type) :
    _type(type)
{
    std::cout << "Dog constructor called." << std::endl;
    this->_brain = new Brain;
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
    this->_brain = new Brain;
    this->_brain->setIdea("new Dog idea");
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
    delete this->_brain;
}