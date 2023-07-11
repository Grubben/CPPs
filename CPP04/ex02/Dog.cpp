#include "Dog.hpp"

Dog::Dog()
	: Animal("canis")
{
	brain = new Brain();
	std::cout << "Dog " << type;
	std::cout << " created" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl; 
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog " << type;
	std::cout << " destroyed" << std::endl;
	delete brain;
}

Dog	&Dog::operator= (const Dog &copy)
{
	if (this != &copy)
	{
		type = copy.type;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}