#pragma once
#include <string>
#include <iostream>

class ClapTrap
{
private:
	std::string	name;
	int					hitpoints;
	int					energy;
	int					attackdmg;

	ClapTrap();
public:
	ClapTrap(std::string newname);
	ClapTrap(std::string newname, int hp, int en, int ad);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap	&operator= (const ClapTrap &copy);

	const std::string	&getName() const;
	const int			&getHealth() const;
	const int			&getEnergy() const;
	const int			&getAttackdmg() const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
