#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <iostream>

template <typename T>

void iter(T* arr, int len, T(*f)(T))
{
    if (!arr)
        throw "Empty array";
    for (int i = 0; i < len; i++)
        f(arr[i]);
}
#endif