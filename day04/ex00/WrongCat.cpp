#include "WrongCat.hpp"

WrongCat::WrongCat(std::string type) :
    _type(type)
{
    std::cout << "WrongCat constructor called." << std::endl;
    this->_type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &cp)
{
    (*this) = cp;
}

WrongCat&	WrongCat::operator= (const WrongCat &cp)
{
	// std::cout << "WrongCat assignation operator called" << std::endl;
    if (this == &cp)
        return (*this);
    this->_type = cp._type;
	return (*this);
}

void WrongCat::makeSound() const
{
    std::cout << "Ya pidor!" << std::endl;
}

std::string WrongCat::getType()
{
    return (this->_type);
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called." << std::endl;
}
