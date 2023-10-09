#include <iostream>
#include "RPN.hpp"

int main(int argc, char*argv[])
{
    if (argc != 2)
    {
        std::cout << "Wrong No of Args" << std::endl;
        return 0;
    }
    try
    {
        // std::cout << atoi("1") << std::endl;
        RPN rpn(argv[1]);
        // RPN rpn("1 * 2");
        rpn.calculate();
        // RPN norpn(rpn);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        std::cout << "ERROR" << std::endl;
    }
    
    return 0;
}