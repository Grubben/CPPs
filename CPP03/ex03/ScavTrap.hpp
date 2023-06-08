#pragma once
#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	ScavTrap();
	ScavTrap(const std::string& newname);
	ScavTrap(const ScavTrap &copy);
	~ScavTrap();

	ScavTrap	&operator= (const ScavTrap &copy);

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	void	guardGate();
};

