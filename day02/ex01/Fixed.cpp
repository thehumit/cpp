#include "Fixed.hpp"

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;

}

Fixed::Fixed(int x)
{
	std::cout << "Int constructor called" << std::endl;
	this->point = (x << fractBits);
}

Fixed::Fixed(float x)
{
	std::cout << "Float constructor called" << std::endl;
	this->point = roundf(x * (1 << fractBits));
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
	// std::cout << "getRawBits member function called" << std::endl;
	return(point);
}

void Fixed::setRawBits(int const raw)
{
	point = raw;
}

float Fixed::toFloat(void) const
{
	return ((float) this->point / float(1 << fractBits));
}

int Fixed::toInt(void) const
{
	return (this->point >> fractBits);	
}

std::ostream& operator<< (std::ostream &out, const Fixed &fixed)
{
	out << fixed.toFloat();
	return (out);
}