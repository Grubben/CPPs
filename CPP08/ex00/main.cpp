#include <iostream>
#include <cstdlib>
#include <vector>
#include "easyfind.hpp"

int main(int, char**)
{
    std::vector<int>    v;

    v.push_back(1);
    v.push_back(3);
    // v.push_back(2);
    v.push_back(4);

    try
    {
        std::cout << *(easyfind<std::vector<int> >(v, 3) + 1) << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return 0;
}