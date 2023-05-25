#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("UnNamed", 100, 100, 30)
{
	std::cout << "FragTrap " << getName();
	std::cout << " constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy)
	: ClapTrap(copy.getName(), 100, 100, 30)
{
	std::cout << "FragTrap " << getName();
	std::cout << " copy constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& newname)
	: ClapTrap(newname, 100, 100, 30)
{
	std::cout << "FragTrap " << getName();
	std::cout << " constructor called" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getName();
	std::cout << " destructor called" << std::endl;
}

FragTrap	&FragTrap::operator= (const FragTrap &copy)
{
	if (this != &copy)
	{
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High Five me broh!!" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	std::cout << "FragTrap " << getName();
	std::cout << " attacks " << target;
	std::cout << ", causing " << getAttackdmg();
	std::cout << " points of damage" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	std::cout << "FragTrap " << getName();
	std::cout << " is attacked by " << amount;
	std::cout << " points of damage" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	std::cout << "FragTrap " << getName();
	std::cout << " is reapaired by " << amount;
	std::cout << " points of damage" << std::endl;
}
