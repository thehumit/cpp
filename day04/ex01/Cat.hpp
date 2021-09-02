#ifndef CAT_HPP
#define CAT_HPP

#include <string>
#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat
    : public Animal
{
private:
    Brain *_brain;
protected:
    std::string _type;
public:
    Cat(std::string type = "Cat");
    Cat(const Cat &cp);
    Cat&	operator= (const Cat &cp);
    void makeSound() const;
    std::string getType();
    ~Cat();
};

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
    this->_brain = cp._brain;
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

#endif