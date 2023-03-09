#pragma once
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string	name;
public:
	DiamondTrap(/* args */);
	~DiamondTrap();
};

DiamondTrap::DiamondTrap(/* args */)
{
}

DiamondTrap::~DiamondTrap()
{
}
