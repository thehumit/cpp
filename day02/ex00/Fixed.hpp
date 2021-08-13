#include <iostream>

class Fixed
{
public:
	Fixed();
	Fixed(const Fixed &f1);
	~Fixed();
	Fixed& operator= (const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
private:
	int point;
	static const int fractBits = 8;
	
};
