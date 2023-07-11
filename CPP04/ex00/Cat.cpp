#include "Cat.hpp"

Cat::Cat()
	: Animal("felix")
{
	std::cout << "Cat " << type;
	std::cout << " created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << type;
	std::cout << " destroyed" << std::endl;
}

Cat	&Cat::operator= (const Cat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}