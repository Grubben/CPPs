#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string newname) :  name(newname)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
	hitpoints = 10;
	energy = 10;
	attackdmg = 0;
}
ClapTrap::ClapTrap(const std::string& newname, int hp, int en, int attdmg)
	: name(newname)
	, hitpoints(hp)
	, energy(en)
	, attackdmg(attdmg)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
	std::cout << "Health " << hitpoints << std::endl;
	std::cout << "Energy " << energy << std::endl;
	std::cout << "AttackDamage " << attackdmg << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name;
	std::cout << " destructor called" << std::endl;
}

std::string	ClapTrap::getName()
{
	return (name);
}

int			ClapTrap::getEnergy()
{
	return (energy);
}

int			ClapTrap::getAttackdmg()
{
	return (attackdmg);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name;
	std::cout << " attacks " << target;
	std::cout << ", causing " << attackdmg;
	std::cout << " points of damage" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	std::cout << " is attacked by " << amount;
	std::cout << " points of damage" << std::endl;

}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	std::cout << " is reapaired by " << amount;
	std::cout << " points of damage" << std::endl;

}