#pragma once
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	/* data */
	FragTrap();
public:
	FragTrap(const std::string& newname);
	FragTrap(const FragTrap &copy);
	~FragTrap();

	FragTrap	&operator= (const FragTrap &copy);

	void attack(const std::string& target);
	// void takeDamage(unsigned int amount);
	// void beRepaired(unsigned int amount);

	void highFivesGuys(void);
};