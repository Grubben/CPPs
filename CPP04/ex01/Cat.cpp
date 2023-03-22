#include "Cat.hpp"

Cat::Cat()
	: Animal("felix")
	, derType("cat")
{
	brain = new Brain();
	std::cout << "Cat " << derType;
	std::cout << " created" << std::endl;
}

Cat::Cat(const Cat &copy)
	: Animal("felix")
	, derType(copy.derType)
{
	std::cout << "Cat copy constructor called" << std::endl; 
	// brain = new Brain(*copy.brain);
	*this = copy;
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
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}