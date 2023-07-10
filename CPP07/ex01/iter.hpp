#pragma once

template <typename T, typename F>
void    iter(T* aa, unsigned int len, F func)
{
    for (unsigned int i = 0; i < len; i++)
    {
        func(aa[i]);
    }
}