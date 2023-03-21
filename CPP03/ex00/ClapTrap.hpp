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
	ClapTrap();
	ClapTrap(std::string newname);
	ClapTrap(const ClapTrap &copy);
	~ClapTrap();

	ClapTrap	&operator= (const ClapTrap &copy);

	std::string	getName() const;
	int			getHealth() const;
	int			getEnergy() const;
	int			getAttackdmg() const;

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
