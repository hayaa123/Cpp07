#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(Array &other);
        Array &operator=(Array &other);
        T &operator[](size_t index);
        const T &operator[](size_t index) const;
        unsigned int size();
        ~Array();

    private:
        T *_items;
        size_t _num;
};

#include "Array.tpp"

#endif