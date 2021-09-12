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
