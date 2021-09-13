#pragma once
#include <iostream>
#include <ostream>
#include <vector>
#include <algorithm>

class Span
{
private:
    std::vector<int> _vec;
    unsigned int _size;
    int _numStored;
public:
    Span(unsigned int n = 0);
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
    int shortestSpan();
    int longestSpan();
    std::vector<int> getVec() const;
};

// template <class T>
template <class T>

std::ostream& operator<< (std::ostream &out, const std::vector<T> &vec)
{
    int size = vec.size();
    for (int i = 0; i < size; i++)
        out << "++" << vec[i] << std::endl;
    return out;
}
// std::ostream& operator<< (std::ostream &out, const std::vector<T> &vec);