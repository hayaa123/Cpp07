#ifndef ITER_HPP
# define ITER_HPP
#include <string>
#include <iostream>

template<typename T, typename Func>

void iter(T *address, const size_t len, Func f)
{
    for(size_t i =0; i < len; i++)
    {
        f(address[i]);
    }
}

#endif