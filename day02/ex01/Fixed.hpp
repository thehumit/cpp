#include <iostream>
#include <cmath>

class Fixed
{
public:
	Fixed();
	Fixed(int x);
	Fixed(float x);
	Fixed(const Fixed &f1);
	~Fixed();
	Fixed& operator= (const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;
private:
	int point;
	static const int fractBits = 8;
	
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);