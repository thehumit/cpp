#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>

const T& max(const T& a, const T& b)
{
    return (a > b) ? a : b;
}

template <typename T>

const T& min(const T& a, const T& b)
{
    return (a < b) ? a : b;
}

template <typename T>
void swap(T &first, T &second)
{   
    if (&first != &second)
    {
        T tmp = first;
        first = second;
        second = tmp;
    }
}

#endif