#include "Array.hpp"

template <typename T>
Array<T>::Array() : _items(NULL), _num(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _items(new T[n]), _num(n)
{
    for(unsigned int i = 0; i < _num; i++)
    {
        _items[i] = 0;
    }
}

template <typename T>
Array<T>::Array(const Array<T> &other)
{
    _num = other._num;
    _items = new T[_num];

    for(unsigned int i=0; i < _num; i++)
    {
        _items[i] = other._items[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &other)
{
    if(this == &other)
        return (*this);
    delete[] _items;
    _num = other._num;
    _items = new T[_num];
    for(unsigned int i=0; i < _num; i++)
    {
        _items[i] = other._items[i];
    }
    return (*this);
}


template <typename T>
T &Array<T>::operator[](unsigned int index)
{
    if(index >=_num)
        throw std::out_of_range("Index out of range");
    return (_items[index]);
}

template <typename T>
const T &Array<T>::operator[](unsigned int index) const
{
    if(index >=_num)
        throw std::out_of_range("Index out of range");
    return (_items[index]);
}

template <typename T>
unsigned int Array<T>::size() const
{
    return (_num);
}

template <typename T>
Array<T>::~Array()
{
    delete[] _items;
}

