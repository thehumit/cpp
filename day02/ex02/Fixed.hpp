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
	Fixed& operaFitor= (const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
	float toFloat(void) const;
	int	toInt(void) const;
	Fixed operator * (Fixed f2);
	Fixed operator / (Fixed f2);
	Fixed operator + (Fixed f2);
	Fixed operator - (Fixed f2);
	Fixed operator ++ (int x);
	Fixed& operator ++ (void);
	Fixed& operator -- (void);
	Fixed operator -- (int x);
	static Fixed& max(Fixed &a, Fixed &b);
	static const Fixed& max(const Fixed &a, const Fixed &b);
	static Fixed& min(Fixed &a, Fixed &b);
	static const Fixed& min(const Fixed &a, const Fixed &b);
	bool operator > (const Fixed &b) const;
	bool operator < (const Fixed &b) const;
	bool operator >= (const Fixed &b) const;
	bool operator <= (const Fixed &b) const;
	bool operator == (const Fixed &b) const;
	bool operator != (const Fixed &b) const;
private:
	int point;
	static const int fractBits = 8;
	
};

std::ostream& operator<< (std::ostream &out, const Fixed &fixed);
