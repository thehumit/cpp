#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"

class Ice
    :public AMateria
{
public:
    Ice(std::string const & type = "ice");
    Ice&	operator= (const Ice &cp);
    Ice(const Ice &cp);
    ~Ice();
    std::string const & getType() const; //Returns the materia type
    Ice* clone() const;
    void use(ICharacter& target) const;
};

Ice::Ice(std::string const & type)
    // : _type(type)
{
    this->_type = type;
    std::cout << "Ice constructor called." << std::endl;
}

Ice&	Ice::operator= (const Ice &cp)
{
	// std::cout << "Ice assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

Ice::Ice(const Ice &cp)
{
    (*this) = cp;
}

Ice::~Ice()
{
    std::cout << "Ice destructor called." << std::endl;
}

std::string const & Ice::getType() const
{
    return (this->_type);
}

Ice* Ice::clone() const
{
    return (new Ice());
}

void Ice::use(ICharacter& target) const
{
    std::cout << "* shoots an ice bolt at " << target.getName() <<  " *" << std::endl;
}

#endif