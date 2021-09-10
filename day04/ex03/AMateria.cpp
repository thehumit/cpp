#include "AMateria.hpp"

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
    (void)target;
}
