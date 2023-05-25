#include "Point.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	Point	a(2, 3);
	Point	b = a; //This does NOT use operator=

	b = a; // This does use operator=

	std::cout << "hello" << std::endl;
}