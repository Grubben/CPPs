#pragma once
#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:
	/* data */
public:
	FragTrap();
	FragTrap(const std::string& newname);
	FragTrap(const FragTrap &copy);
	~FragTrap();

	FragTrap	&operator= (const FragTrap &copy);

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};