#include <iostream>
#include "Serializer.hpp"

int	main()
{
	Data	player = {1,2,3};
	uintptr_t	plptr;

	plptr = Serializer::serialize(&player);
	std::cout << &player << std::endl;

	std::cout << Serializer::deserialize(plptr) << std::endl;
}