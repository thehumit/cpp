#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <string>
#include "ICharacter.hpp"
// #include "Character.hpp"

class ICharacter;

class AMateria
{
protected:
    std::string _type;
public:
    AMateria(std::string const & type = "default");
    AMateria&	operator= (const AMateria &cp);
    AMateria(const AMateria &cp);
    ~AMateria();
    std::string const & getType() const; //Returns the materia type
    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target) const;
};

AMateria::AMateria(std::string const & type)
    : _type(type)
{
    std::cout << "AMateria constructor called." << std::endl;
}

AMateria&	AMateria::operator= (const AMateria &cp)
{
	// std::cout << "AMateria assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

AMateria::AMateria(const AMateria &cp)
{
    (*this) = cp;
}

AMateria::~AMateria()
{
    std::cout << "AMateria destructor called." << std::endl;
}

std::string const & AMateria::getType() const
{
    return (this->_type);
}

void AMateria::use(ICharacter& target) const
{
}

#endif