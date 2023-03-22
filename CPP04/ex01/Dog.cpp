#include "Dog.hpp"

Dog::Dog()
	: Animal("canis")
	, derType("dog")
{
	brain = new Brain();
	std::cout << "Dog " << derType;
	std::cout << " created" << std::endl;
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
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}