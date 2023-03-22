#include "Cat.hpp"

Cat::Cat()
	: Animal("felix")
	, derType("cat")
{
	brain = new Brain();
	std::cout << "Cat " << derType;
	std::cout << " created" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Cat " << derType;
	std::cout << " destroyed" << std::endl;
	delete brain;
}

Cat	&Cat::operator= (const Cat &copy)
{
	if (this != &copy)
	{
		derType = copy.derType;
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}