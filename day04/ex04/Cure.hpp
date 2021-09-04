#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <string>
#include "AMateria.hpp"
#include "ICharacter.hpp"
// #include "Character.hpp"


class Cure
    :public AMateria
{
public:
    Cure(std::string const & type = "cure");
    Cure&	operator= (const Cure &cp);
    Cure(const Cure &cp);
    ~Cure();
    std::string const & getType() const; //Returns the materia type
    Cure* clone() const;
    void use(ICharacter& target) const;
};

Cure::Cure(std::string const & type)
    // : _type(type)
{
    this->_type = type;
    std::cout << "Cure constructor called." << std::endl;
}

Cure&	Cure::operator= (const Cure &cp)
{
	// std::cout << "Cure assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

Cure::Cure(const Cure &cp)
{
    (*this) = cp;
}

Cure::~Cure()
{
    std::cout << "Cure destructor called." << std::endl;
}

std::string const & Cure::getType() const
{
    return (this->_type);
}

Cure* Cure::clone() const
{
    return (new Cure());
}

void Cure::use(ICharacter& target) const
{
    std::cout << "* heals " << target.getName() <<  "’s wounds *" << std::endl;
}

#endif