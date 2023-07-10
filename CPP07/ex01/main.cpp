#include <iostream>
#include "iter.hpp"

void    show(int i)
{
    std::cout << i *10 << std::endl;
}

int main()
{
    int arr[] = {1, 2, 3};

    iter(arr, 3, show);


    return 0;
}
