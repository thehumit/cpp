#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"

class WrongCat
    : public WrongAnimal
{
protected:
    std::string _type;
public:
    WrongCat(std::string type = "WrongCat");
    WrongCat(const WrongCat &cp);
    WrongCat&	operator= (const WrongCat &cp);
    void makeSound() const;
    std::string getType();
    ~WrongCat();
};

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

#endif