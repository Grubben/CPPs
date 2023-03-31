#include "HumanA.hpp"
#include <iostream>

/**	 constructor initializer list !!!	*/
HumanA::HumanA(std::string name, Weapon &newWeapon)
	: name(name)
	, weapon(newWeapon)
{
	// this->name = name;
	std::cout << this->name << " constructor called" << std::endl;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}