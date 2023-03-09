#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
public:
	FragTrap(const std::string& newname);
	~FragTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};


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
