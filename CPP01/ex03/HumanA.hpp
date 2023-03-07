#pragma once
#include "Weapon.hpp"

class HumanA
{
private:
	std::string	name;
	Weapon		&weapon;

public:
	HumanA(std::string name, Weapon &newWeapon);
	~HumanA();
	
	void	attack(void);
};