#include "Cat.hpp"

Cat::Cat(std::string type) :
    _type(type)
{
    std::cout << "Cat constructor called." << std::endl;
    this->_brain = new Brain;
}

Cat::Cat(const Cat &cp)
{
    (*this) = cp;
}

Cat&	Cat::operator= (const Cat &cp)
{
	// std::cout << "Cat assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
    this->_brain = new Brain;
    this->_brain->setIdea("new Cat idea");
	return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Meow Meow!" << std::endl;
}

std::string Cat::getType()
{
    return (this->_type);
}

Cat::~Cat()
{
    std::cout << "Cat destructor called." << std::endl;
    delete this->_brain;
}