#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie()
{}

Zombie::Zombie(std::string name)
{
	this->name = name;
	std::cout << this->name << ": spawns" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << this->name << ": starves" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
}
