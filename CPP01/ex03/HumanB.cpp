#include "HumanB.hpp"
#include <iostream>

/**	 constructor initializer list !!!	*/
HumanB::HumanB(std::string name)
{
	this->name = name;
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
	std::cout << name << " attacks with their ";
	std::cout << (*weapon).getType() << std::endl;
}