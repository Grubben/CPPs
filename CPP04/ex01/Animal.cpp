#include "Animal.hpp"

Animal::Animal()
	: type("AnimalType")
{
	std::cout << "Animal of type " << type;
	std::cout << " created" << std::endl;
}

Animal::Animal(std::string newType)
	: type(newType)
{
	std::cout << "Animal of type " << type;
	std::cout << " created" << std::endl;
}

Animal::~Animal()
{
	std::cout << "Animal of type " << type;
	std::cout << " destroyed" << std::endl;
}

Animal	&Animal::operator= (const Animal &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

std::string	Animal::getType() const
{
	return (type);
}

void	Animal::makeSound() const
{
	std::cout << "<Animal Sound here>" << std::endl;
}