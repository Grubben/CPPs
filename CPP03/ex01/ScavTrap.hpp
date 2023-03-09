#pragma once
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	/* data */
public:
	ScavTrap(const std::string& newname);
	~ScavTrap();

	void	guardGate();
};

