#pragma once
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	/*private members*/
	std::string	name;

public:
	DiamondTrap(void);
	DiamondTrap(const std::string& newname);
	DiamondTrap(const DiamondTrap& copy);
	~DiamondTrap(void);

	DiamondTrap&	operator= (const DiamondTrap& copy);

	using ScavTrap::attack;
	void	whoAmI() const;
};

