#include <iostream>
#include <random>
#include "ABC.hpp"

Base* generate(void)
{
	/*Overkill on the random but it's correct*/
	std::random_device	rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<int> rand123(1, 3);

	switch (rand123(mt))
	{
	case 1:
		return new A;
	case 2:
		return new B;
	default:
		return new C;
	}
}

int	main(void)
{
	Base*	myst = generate();



	delete myst;

	return 0;
}