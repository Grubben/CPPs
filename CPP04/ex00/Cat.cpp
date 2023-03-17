#include "Cat.hpp"

Cat::Cat()
	: Animal("felix")
	, derType("cat")
{
	std::cout << "Cat " << derType;
	std::cout << " created" << std::endl;
}
Cat::~Cat()
{
	std::cout << "Cat " << derType;
	std::cout << " destroyed" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}