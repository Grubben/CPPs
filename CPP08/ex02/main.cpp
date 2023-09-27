#include <iostream>
#include <cstdlib>
#include <vector>
#include "MutantStack.hpp"

int main(int, char**)
{
    MutantStack<int> ms;

    ms.push(5);
    std::cout << *ms.begin() << std::endl;
    std::cout << *(ms.end()-1) << std::endl;
    std::cout << ms.size() << std::endl;

}