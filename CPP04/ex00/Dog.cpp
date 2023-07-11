#include "Dog.hpp"

Dog::Dog()
	: Animal("canis")
{
	std::cout << "Dog " << type;
	std::cout << " created" << std::endl;
}
Dog::~Dog()
{
	std::cout << "Dog " << type;
	std::cout << " destroyed" << std::endl;
}

Dog	&Dog::operator= (const Dog &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}