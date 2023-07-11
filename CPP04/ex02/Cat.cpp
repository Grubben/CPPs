#include "Cat.hpp"

Cat::Cat()
	: Animal("felix")
{
	brain = new Brain();
	std::cout << "Cat " << type;
	std::cout << " created" << std::endl;
}

Cat::Cat(const Cat &copy)
{
	std::cout << "Cat copy constructor called" << std::endl; 
	*this = copy;
}

Cat::~Cat()
{
	std::cout << "Cat " << type;
	std::cout << " destroyed" << std::endl;
	delete brain;
}

Cat	&Cat::operator= (const Cat &copy)
{
	if (this != &copy)
	{
		type = copy.type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Cat::makeSound() const
{
	std::cout << "Meoww" << std::endl;
}