#include "Fixed.hpp"

Fixed::Fixed() : point(0)
{
}

Fixed::Fixed(int x)
{
	this->point = (x << fractBits);
}

Fixed::Fixed(float x)
{
	this->point = roundf(x * (1 << fractBits));
}

Fixed::~Fixed()
{
}

Fixed&	Fixed::operator= (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->point = fixed.getRawBits();
	return (*this);
}

Fixed::Fixed(const Fixed &f1) : point(f1.getRawBits())
{
}

int Fixed::getRawBits() const
{
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

Fixed Fixed::operator * (Fixed f2)
{
	return(Fixed(this->toFloat() * f2.toFloat()));
}

Fixed Fixed::operator - (Fixed f2)
{
	return(Fixed(this->toFloat() - f2.toFloat()));
}

Fixed Fixed::operator + (Fixed f2)
{
	return(Fixed(this->toFloat() + f2.toFloat()));
}

Fixed Fixed::operator / (Fixed f2)
{
	return(Fixed(this->toFloat() / f2.toFloat()));
}

Fixed& Fixed::operator ++ (void)
{
	this->point++;
	return (*this);
}

Fixed& Fixed::operator -- (void)
{
	this->point--;
	return (*this);
}

Fixed Fixed::operator ++ (int x)
{
	Fixed tmp(*this);

	this->point++;
	return (tmp);
} 

Fixed Fixed::operator -- (int x)
{
	Fixed tmp(*this);

	this->point--;
	return (tmp);
}

Fixed& Fixed::max (Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min (Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::max (const Fixed &a, const Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::min (const Fixed &a, const Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

bool Fixed::operator > (const Fixed &b) const
{
	return (this->point > b.point);
}

bool Fixed::operator < (const Fixed &b) const
{
	return (this->point < b.point);
}

bool Fixed::operator >= (const Fixed &b) const
{
	return (this->point >= b.point);
}

bool Fixed::operator <= (const Fixed &b) const
{
	return (this->point <= b.point);
}

bool Fixed::operator == (const Fixed &b) const
{
	return (this->point == b.point);
}

bool Fixed::operator != (const Fixed &b) const
{
	return (this->point != b.point);
}

