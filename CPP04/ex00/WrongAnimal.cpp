#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
	: type("AnimalType")
{
	std::cout << "WrongAnimal of type " << type;
	std::cout << " created" << std::endl;
}

WrongAnimal::WrongAnimal(std::string newType)
	: type(newType)
{
	std::cout << "WrongAnimal of type " << type;
	std::cout << " created" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal of type " << type;
	std::cout << " destroyed" << std::endl;
}

WrongAnimal	&WrongAnimal::operator= (const WrongAnimal &copy)
{
	if (this != &copy)
	{
		type = copy.type;
	}
	return (*this);
}

std::string	WrongAnimal::getType() const
{
	return (type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "<WrongAnimal Sound here>" << std::endl;
}