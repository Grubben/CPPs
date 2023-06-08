#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
	: FragTrap("UnNamed")
	, name("UnNamed")
{
	std::cout << "Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string& newname)
	: ClapTrap(newname + "_clap_name", 100, 50, 30)
	, name(newname)
{
	std::cout << "Constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
	: FragTrap(copy)
	, name(copy.getName())
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator= (const DiamondTrap& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
	}
	return (*this);
}

void	DiamondTrap::whoAmI() const
{
	std::cout << name << std::endl;
}