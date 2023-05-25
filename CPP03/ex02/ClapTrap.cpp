#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: name("UnNamed")
	, hitpoints(10)
	, energy(10)
	, attackdmg(0)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
	: name(copy.name)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
	*this = copy;
}

ClapTrap::ClapTrap(std::string newname)
	: name(newname)
	, hitpoints(10)
	, energy(10)
	, attackdmg(0)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string newname, int hp, int en, int ad)
	: name(newname)
	, hitpoints(hp)
	, energy(en)
	, attackdmg(ad)
{
	std::cout << "ClapTrap " << name;
	std::cout << " constructor called" << std::endl;
}


ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name;
	std::cout << " destructor called" << std::endl;
}

ClapTrap	&ClapTrap::operator= (const ClapTrap &copy)
{
	std::cout << "ClapTrap " << name;
	std::cout << " assignment operator called" << std::endl;
	if (this == &copy)
		return (*this);
	name = copy.getName();
	hitpoints = copy.getHealth();
	energy = copy.getEnergy();
	attackdmg = copy.getAttackdmg();
	return (*this);
}

const std::string	&ClapTrap::getName() const
{
	return (name);
}

const int			&ClapTrap::getHealth() const
{
	return	(hitpoints);
}

const int			&ClapTrap::getEnergy() const
{
	return (energy);
}

const int			&ClapTrap::getAttackdmg() const
{
	return (attackdmg);
}

void	ClapTrap::attack(const std::string& target)
{
	std::cout << "ClapTrap " << name;
	if (hitpoints <= 0 || !energy)
	{
		std::cout << " cannot attack" << std::endl;
		return ;
	}
	std::cout << " attacks " << target;
	std::cout << ", causing " << attackdmg;
	std::cout << " points of damage" << std::endl;
	energy--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	std::cout << " is attacked by " << amount;
	std::cout << " points of damage" << std::endl;
	if (hitpoints < 0)
	{
		std::cout << "ClapTrap " << name;
		std::cout << " is dead" << std::endl;
		return ;
	}
	hitpoints -= amount;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << name;
	if (hitpoints <= 0 || !energy)
	{
		std::cout << " cannot be repaired" << std::endl;
		return ;
	}
	std::cout << " is repaired by " << amount;
	std::cout << " points of damage" << std::endl;
}