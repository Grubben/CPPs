#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char*argv[])
{
    if (argc != 2)
    {
        std::cout << "Wrong No of Args" << std::endl;
        return 0;
    }
    
    try
    {
        BitcoinExchange bex("data.csv");

        bex.dateValueCalculator(argv[1]);
        // std::cout << bex.getClosest("2010-08-27") << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    catch(...)
    {
        std::cerr << "Unknown exception caught" << std::endl;
    }
    
    return 0;
}