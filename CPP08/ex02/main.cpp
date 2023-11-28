#include <iostream>
#include <cstdlib>
#include <vector>
#include "MutantStack.hpp"
#include "../ex00/easyfind.hpp"
int main(int, char **)
{
    MutantStack<int> ms;

    ms.push(5);
    MutantStack<int>::iterator itb = ms.begin();
    std::cout << *itb << std::endl;
    std::cout << *(ms.end() - 1) << std::endl;
    std::cout << ms.size() << std::endl;

    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    std::cout << mstack.top() << std::endl;
    mstack.pop();
    std::cout << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    //[...]
    mstack.push(0);
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    ++it;
    --it;
    std::cout << "whiler" << std::endl;
    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }
    std::stack<int> s(mstack);
    MutantStack<int>t = mstack;
    std::cout << *easyfind(mstack, 737) << std::endl;
}