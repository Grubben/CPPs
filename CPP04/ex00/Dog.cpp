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

void	Dog::makeSound() const
{
	std::cout << "Woof" << std::endl;
}