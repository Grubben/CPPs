#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	ClapTrap ct("scrawny kid");
	ClapTrap cltr(ct);
	ct.attack("mean bully");
	ct.takeDamage(5);
	ct.beRepaired(15);
	ct.takeDamage(20);
	ct.takeDamage(20);
	ct.beRepaired(15);
}