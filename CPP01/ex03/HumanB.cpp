#include "HumanB.hpp"
#include <iostream>

/**	 constructor initializer list !!!	*/
HumanB::HumanB(std::string name)
	: name(name)
{
	weapon = NULL;
}

HumanB::~HumanB()
{
}

void	HumanB::setWeapon(Weapon &weap)
{
	weapon = &weap;
}
void	HumanB::attack(void)
{
	if (weapon)
	{
		std::cout << name << " attacks with their ";
		std::cout << (*weapon).getType() << std::endl;
	}
	else
		std::cout << name << " has no weapon and cannot attack" << std::endl;
}