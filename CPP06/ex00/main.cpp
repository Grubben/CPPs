#include <iostream>
#include "ScalarConverter.hpp"

int	main(int argc, char** argv)
{
	if (argc != 2)
		return 0;
	std::cout << ScalarConverter::convert(argv[1]) << std::endl;
}