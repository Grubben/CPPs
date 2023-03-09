#include "ScavTrap.hpp"

ScavTrap::ScavTrap(const std::string& newname)
	: ClapTrap(newname, 100, 50, 20)
{
	std::cout << "ScavTrap " << getName();
	std::cout << " constructor called" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName();
	std::cout << " destructor called" << std::endl;

}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getName();
	std::cout << " activates GateKeeper mode" << std::endl;
}