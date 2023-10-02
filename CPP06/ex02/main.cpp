#include <iostream>
#include <cstdlib>
#include "ABC.hpp"

Base* generate(void)
{
	/*Overkill on the random but it's correct*/
	// std::random_device	rd;
	// std::mt19937 mt(rd());
	// std::uniform_int_distribution<int> rand123(1, 3);

	// switch (rand123(mt))
	int r = std::rand() % 3;
	std::cout << r << std::endl;
	switch (r)
	{
	case 0:
		std::cout << "Generating A" << std::endl;
		return new A;
	case 1:
		std::cout << "Generating B" << std::endl;
		return new B;
	default:
		std::cout << "Generating C" << std::endl;
		return new C;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Identified as A*";
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Identified as B*";
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Identified as C*";
	else
		std::cout << "ERROR";
	std::cout << std::endl;
}

void	identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "Identified as A&" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified as B&" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified as C&" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{}
	
}

int	main(void)
{
	srand(time(NULL));
	Base*	myst = generate();

	identify(myst);
	identify(*myst);


	delete myst;

	return 0;
}