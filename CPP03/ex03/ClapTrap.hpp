#pragma once
#include <string>
#include <iostream>
class ClapTrap
{
private:
	const std::string	name;
	int					hitpoints;
	int					energy;
	int					attackdmg;
public:
	ClapTrap(std::string newname);
	ClapTrap(const std::string& newname, int hp, int en, int attdmg);
	~ClapTrap();

	std::string	getName();
	int			getEnergy();
	int			getAttackdmg();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
