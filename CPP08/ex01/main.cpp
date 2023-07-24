#include <iostream>
#include <cstdlib>
#include <vector>
#include "Span.hpp"

int main(int, char**)
{
    Span sp = Span(7);
    // sp.addNumber(23);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    sp.addNumber(22);

    std::cout << sp.shortestSpan() << std::endl;
    // std::cout << sp.longestSpan() << std::endl;

    // Span    v(2);

    // v.addNumber(12);
    // v.addNumber(8);

    // std::cout << v.longestSpan() << std::endl;
    // v.push_back(1);
    // v.push_back(3);
    // // v.push_back(2);
    // v.push_back(4);

    // try
    // {
    //     std::cout << *(easyfind<std::vector<int> >(v, 2) + 1) << std::endl;
    // }
    // catch(const std::exception& e)
    // {
    //     std::cerr << e.what() << '\n';
    // }
    return 0;
}