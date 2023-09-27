#include <iostream>
#include "BitcoinExchange.hpp"

int main(int argc, char*argv[])
{
    // if (argc != 2)
    //     return 0;
    
    try
    {
        BitcoinExchange bex("data.csv");

        bex.dateValueCalculator("input.txt");
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