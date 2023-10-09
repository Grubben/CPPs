#include <iostream>
#include "PmergeMe.hpp"

int main(int argc, char*argv[])
{
    // if (argc < 2)
    // {
    //     std::cout << "Wrong No of Args" << std::endl;
    //     return 0;
    // }
    try
    {
        PmergeMe    pmm(argc - 1, argv + 1);
        pmm.showSorted();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "ERROR" << std::endl;
    }
    
    return 0;
}