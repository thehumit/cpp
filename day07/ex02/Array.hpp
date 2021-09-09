#include <iostream>

template <class T>
class Array
{
private:
    T *_arr;
    int _size;
public:
    Array(int size = 0);
    Array&		operator=(const Array& copy);
    Array(const Array& copy);
    ~Array();

    T&			operator[](int index);
	const T&	operator[](int index) const;

    class WrongIndex
        : public std::exception
    {
    public:
        const char* what() const throw() { return "Wrong index"; }

    };
};

template <class T>
Array<T>::Array(int size)
{
    this->_size = size;
    this->_arr = new T[size];
}

template <class T>
Array<T>::Array(const Array& copy)
{
    // if (this->_arr)
        // delete[] this->_arr;
    (*this) = copy;
}

template <class T>
Array<T>&		Array<T>::operator=(const Array& copy)
{
    if (this == &copy)
        return (*this);
    // if (this->_arr)
        // delete[] this->_arr;
    this->_arr = new T[copy._size];
    this->_size = copy._size;
    for (int i = 0; i < copy._size; i++)
        this->_arr[i] = copy._arr[i];
    
    return (*this);
}

template <class T>
Array<T>::~Array()
{
    delete[] this->_arr;
}

template <class T>
T&  Array<T>::operator[](int index)
{
    if (index < 0 || index >= this->_size)
        throw Array::WrongIndex(); 
    return(this->_arr[index]);
}

template <class T>
const T&  Array<T>::operator[](int index) const
{
    if (index < 0 || index > this->_size)
        throw Array::WrongIndex(); 
    return(this->_arr[index]);
}