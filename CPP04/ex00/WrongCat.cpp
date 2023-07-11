#include "WrongCat.hpp"

WrongCat::WrongCat()
	: WrongAnimal("felix")
	, type("cat")
{
	std::cout << "WrongCat " << type;
	std::cout << " created" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat " << type;
	std::cout << " destroyed" << std::endl;
}

WrongCat	&WrongCat::operator= (const WrongCat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

void	WrongCat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}