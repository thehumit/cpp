#pragma once
#include <iostream>
#include <vector>
#include <ctime>

template <class T>

int easyfind(T a, int b)
{
    typename T::iterator it = std::find(a.begin(), a.end(), b);
    if (it == a.end())
    {
        throw (-1);
    }
    return (*it);
}