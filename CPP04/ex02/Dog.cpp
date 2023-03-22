#include "Dog.hpp"

Dog::Dog()
	: Animal("canis")
	, derType("dog")
{
	brain = new Brain();
	std::cout << "Dog " << derType;
	std::cout << " created" << std::endl;
}

Dog::Dog(const Dog &copy)
{
	std::cout << "Dog copy constructor called" << std::endl; 
	*this = copy;
}

Dog::~Dog()
{
	std::cout << "Dog " << derType;
	std::cout << " destroyed" << std::endl;
	delete brain;
}

Dog	&Dog::operator= (const Dog &copy)
{
	if (this != &copy)
	{
		derType = copy.derType;
		delete brain;
		brain = new Brain(*copy.brain);
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}