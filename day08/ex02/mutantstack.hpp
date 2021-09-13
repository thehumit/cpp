#pragma once
#include <iostream>
#include <string>
#include <stack>

template <class T>
class MutantStack
    :public std::stack<T>
{
private:
    /* data */
public:
    typedef typename std::stack<T>::container_type::iterator
        iterator;
    typedef typename std::stack<T>::container_type::const_iterator
        const_iterator;
    typedef typename std::stack<T>::container_type::reverse_iterator
        reverse_iterator;
    typedef typename std::stack<T>::container_type::const_reverse_iterator
        const_reverse_iterator;
    MutantStack();
    MutantStack(const MutantStack& copy);
    MutantStack& operator=(const MutantStack& copy);
    ~MutantStack();
    iterator	begin();
    iterator	end();
    const_iterator	begin() const;
    const_iterator	end() const;
    reverse_iterator		rbegin();
    reverse_iterator		rend();
    const_reverse_iterator	rbegin() const;

    const_reverse_iterator	rend() const;
};

template <class T>
MutantStack<T>::MutantStack()
{
}

template <class T>
MutantStack<T>::MutantStack(const MutantStack& copy)
{
    (*this) = copy;
}

template <class T>
MutantStack<T>&		MutantStack<T>::operator=(const MutantStack& copy)
{
    if (this == &copy)
        return (*this);
    return (*this);
}

template <class T>
MutantStack<T>::~MutantStack()
{
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::begin()
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::iterator	MutantStack<T>::end()
{
	return (this->c.end());
}

template <class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::begin() const
{
	return (this->c.begin());
}

template <class T>
typename MutantStack<T>::const_iterator	MutantStack<T>::end() const
{
	return (this->c.end());
}


template <class T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rbegin()
{
	return (this->c.rbegin());
}

template <class T>
typename MutantStack<T>::reverse_iterator		MutantStack<T>::rend()
{
	return (this->c.rend());
}

template <class T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rbegin() const
{
	return (this->c.rbegin());
}

template <class T>
typename MutantStack<T>::const_reverse_iterator	MutantStack<T>::rend() const
{
	return (this->c.rend());
}