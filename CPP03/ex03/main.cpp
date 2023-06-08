#include <iostream>
#include <cmath>

#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	dt("Shiny");
	dt.beRepaired(40);

	dt.guardGate();
	dt.highFivesGuys();

	dt.attack("Enemy");
	
	dt.whoAmI();
}