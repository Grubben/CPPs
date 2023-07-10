#include <iostream>
#include "whatever.hpp"


int main()
{
    // int x = 2;
    // int y = 5;

    // swap(x,y);

    // std::cout << x << std::endl;
    // std::cout << y << std::endl;

    // std::cout << max(2,3) << std::endl;
    // std::cout << max(5,2) << std::endl;
    // std::cout << max(2,2) << std::endl;

    // std::cout << min(2,3) << std::endl;
    // std::cout << min(5,2) << std::endl;
    // std::cout << min(2,2) << std::endl;

    int a = 2;
    int b = 3;
    ::swap( a, b);
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
    std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
    
    std::string c = "chaine1";
    std::string d = "chaine2";

    ::swap(c, d);
    std::cout << "c = " << c << ", d = " << d << std::endl;
    std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
    std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

    return 0;
}
