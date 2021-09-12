#pragma once
#include <iostream>
#include <vector>
#include <ctime>

class Span
{
private:
    std::vector<int> _vec;
    unsigned int _size;
    int _numStored;
public:
    Span(int n = 0);
    Span(const Span& copy);
    Span& operator=(const Span& copy);
    ~Span();

    void addNumber(int num);
    class NumArrOverflow
        : public std::exception
    {
    public:
        const char* what() const throw() { return "More numbers, than allowed."; }

    };
};

Span::Span(unsigned int n)
    :_size(n), _numStored(0)
{
}

Span::Span(const Span& copy)
{
    (*this) = copy;
}

Span&		Span::operator=(const Span& copy)
{
    if (this == &copy)
        return (*this);
    this->_size = copy._size;
    this->_vec = copy._vec;
    return (*this);
}


Span::~Span()
{
}
