#pragma once

#include <cstddef>
#include <exception>
#include <stdexcept>


template <typename T>
class Array
{
    public:
        Array();
        Array(unsigned int n);
        Array(const Array &other);
        Array &operator=(const Array &other);
        T &operator[](unsigned int index);
        const T &operator[](unsigned int index) const;
        unsigned int size() const;
        ~Array();

    private:
        T *_items;
        unsigned int _num;
};

#include "Array.tpp"