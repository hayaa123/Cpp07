#pragma once

#include <cstddef>

template<typename T, typename Func>

void iter(T *address, const size_t len, Func f)
{
    if(!address)
        return;
    for(size_t i =0; i < len; i++)
    {
        f(address[i]);
    }
}

template<typename T, typename Func>
void iter(const T *address, const size_t len, Func f)
{
    if(!address)
        return;
    for(size_t i =0; i < len; i++)
    {
        f(address[i]);
    }
}