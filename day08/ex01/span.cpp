#include "span.hpp"

void Span::addNumber(int num)
{
    if (this->_numStored < 5)
        this->_numStored++;
    else
    {
        throw (Span::NumArrOverflow());
        return ;
    }
    this->_vec.push_back(num);
}

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

int Span::shortestSpan()
{
    int size = this->_vec.size();
    if (size == 0 || size == 1)
        return 0;
    int min = 0;
    std::sort(this->_vec.begin(), this->_vec.end());
    for (int i = 0; i < size - 1; i++)
    {
        if (i == 0)
            min = this->_vec[i + 1] - this->_vec[i];
        if (i > 0 && this->_vec[i + 1] - this->_vec[i] < min)
            min = this->_vec[i + 1] - this->_vec[i];
    }
    return (min);
}

int Span::longestSpan()
{
    if (this->_vec.size() == 0 || this->_vec.size() == 1)
        return 0;
    int size = this->_vec.size() - 1;

    std::sort(this->_vec.begin(), this->_vec.end());
    return (this->_vec[size] - this->_vec[0]);
}

std::vector<int> Span::getVec() const
{
    return (this->_vec);
}

// template <class T>

// std::ostream& operator<< (std::ostream &out, const std::vector<T> &vec)
// {
//     int size = vec.size() - 1;
//     for (int i = 0; i < size; i++)
//         out << vec[i] << std::endl;
//     return out;
// }