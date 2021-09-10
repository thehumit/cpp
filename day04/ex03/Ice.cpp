#include "Ice.hpp"

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
