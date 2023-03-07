#include <string>
#include <iostream>
class ClapTrap
{
private:
	const std::string	name;
	int					hitpoints;
	int					energy;
	int					attackdmg;
public:
	ClapTrap(std::string newname);
	~ClapTrap();

	void attack(const std::string& target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

ClapTrap::ClapTrap(std::string newname) :  name(newname)
{
	std::cout << "ClapTrap constructor called" << std::endl;
	hitpoints = 10;
	energy = 10;
	attackdmg = 0;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called" << std::endl;
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