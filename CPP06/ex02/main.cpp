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
		std::cout << "Generating A" << std::endl;
		return new A;
	case 2:
		std::cout << "Generating B" << std::endl;
		return new B;
	default:
		std::cout << "Generating C" << std::endl;
		return new C;
	}
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != nullptr)
		std::cout << "Identified as A*";
	else if (dynamic_cast<B*>(p) != nullptr)
		std::cout << "Identified as B*";
	else if (dynamic_cast<C*>(p) != nullptr)
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
	catch(const std::bad_cast& e)
	{}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "Identified as B&" << std::endl;
		return;
	}
	catch(const std::bad_cast& e)
	{}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "Identified as C&" << std::endl;
		return;
	}
	catch(const std::bad_cast& e)
	{}
	
}

int	main(void)
{
	Base*	myst = generate();

	identify(myst);
	identify(*myst);


	delete myst;

	return 0;
}