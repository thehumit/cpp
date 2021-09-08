#include <cstdint>
#include <iostream>
#include <string>

class Data
{
private:
	std::string _str;
public:
	Data(std::string str = "string");
	Data& operator= (const Data &cp);
	Data(const Data &cp);
	~Data();
};

Data::Data(std::string str)
	: _str(str)
{}


Data&	Data::operator= (const Data &cp)
{
    if (this == &cp)
        return (*this);
	this->_str = cp._str;
	return (*this);
}

Data::Data(const Data &cp)
{
    (*this) = cp;
}

Data::~Data()
{}


