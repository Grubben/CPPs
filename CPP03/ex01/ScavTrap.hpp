#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
	ScavTrap();
public:
	ScavTrap(const std::string& newname);
	ScavTrap(const ScavTrap &copy);
	virtual ~ScavTrap();

	ScavTrap	&operator= (const ScavTrap &copy);

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	void	guardGate();
};

