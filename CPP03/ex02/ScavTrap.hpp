#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(const ScavTrap &copy);
	ScavTrap(const std::string& newname);
	~ScavTrap();

	ScavTrap	&operator= (const ScavTrap &copy);

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	void	guardGate();
};

