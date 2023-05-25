#include "ScavTrap.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	ScavTrap nn;
	ScavTrap st("buff kid");
	// ScavTrap k(st);
	st.attack("school bully");
	st.takeDamage(43);
	st.beRepaired(32);
	st.guardGate();
}