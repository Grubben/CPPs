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

void	ScavTrap::attack(const std::string& target)
{
	std::cout << "ScavTrap " << getName();
	std::cout << " attacks " << target;
	std::cout << ", causing " << getAttackdmg();
	std::cout << " points of damage" << std::endl;
}

void	ScavTrap::takeDamage(unsigned int amount)
{
	std::cout << "ScavTrap " << getName();
	std::cout << " is attacked by " << amount;
	std::cout << " points of damage" << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount)
{
	std::cout << "ScavTrap " << getName();
	std::cout << " is reapaired by " << amount;
	std::cout << " points of damage" << std::endl;
}
