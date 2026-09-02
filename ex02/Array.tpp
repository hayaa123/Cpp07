#include "Array.hpp"

template <typename T>
Array<T>::Array() : _items(0), _num(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n) : _items(new T[n]), _num(n)
{
}

template <typename T>
Array<T>::Array(Array<T> &other)
{
    _num = other._num;
    _items = new T[_num];

    for(int i=0; i < _num; i++)
    {
        _items[i] = other._items[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(Array<T> &other)
{
    if(this == &other)
        return (*this);
    delete[] _items;
    _num = other._num;
    _items = new T[_num];
    for(int i=0; i < _num; i++)
    {
        _items[i] = other._items[i];
    }
    return (*this);
}


template <typename T>
T &Array<T>::operator[](size_t index)
{
    if(index >=_num)
        throw std::exception();
    return (_items[index]);
}

template <typename T>
const T &Array<T>::operator[](size_t index) const
{
    if(index >=_num)
        throw std::exception();
    return (_items[index]);
}

template <typename T>
unsigned int Array<T>::size()
{
    return (_num);
}

template <typename T>
Array<T>::~Array()
{
    delete[] _items;
}

