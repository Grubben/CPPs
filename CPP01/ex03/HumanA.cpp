#include "HumanA.hpp"
#include <iostream>

/**	 constructor initializer list !!!	*/
HumanA::HumanA(std::string name, Weapon &newWeapon) : weapon(newWeapon)
{
	this->name = name;
}

HumanA::~HumanA()
{
}

void	HumanA::attack(void)
{
	std::cout << name << " attacks with their ";
	std::cout << weapon.getType() << std::endl;
}