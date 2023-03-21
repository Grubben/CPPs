#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("felix")
	, derType("cat")
{
	std::cout << "WrongCat " << derType;
	std::cout << " created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << derType;
	std::cout << " destroyed" << std::endl;
}

WrongCat	&WrongCat::operator= (const WrongCat &copy)
{
	if (this != &copy)
	{
		derType = copy.derType;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}