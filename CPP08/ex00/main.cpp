#include <iostream>
#include <cstdlib>
#include <vector>
#include "easyfind.hpp"

int main(int, char**)
{
    std::vector<int>    v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(2);

    easyfind<std::vector<int> >(v, 2);
}