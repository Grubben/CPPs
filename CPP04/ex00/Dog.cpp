#include "Dog.hpp"

Dog::Dog()
	: Animal("felix")
	, derType("dog")
{
	std::cout << "Dog " << derType;
	std::cout << " created" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog " << derType;
	std::cout << " destroyed" << std::endl;
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