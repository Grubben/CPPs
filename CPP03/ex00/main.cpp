#include "ClapTrap.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	ClapTrap ct("scrawny kid");
	ct.attack("mean bully");
	ct.takeDamage(20);
	ct.beRepaired(15);
}