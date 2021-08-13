#include "Fixed.hpp"

Fixed::Fixed()
{
	setRawBits(0);
	std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed&	Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->point = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &f1) : point(f1.getRawBits())
{
	std::cout << "Copy constructor called" << std::endl;
}

int Fixed::getRawBits() const
{
	std::cout << "getRawBits member function called" << std::endl;
	return(point);
}

void Fixed::setRawBits(int const raw)
{
	point = raw;
}