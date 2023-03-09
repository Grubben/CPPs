#include "ScavTrap.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	ScavTrap st("buff kid");
	st.attack("school bully");
	st.takeDamage(43);
	st.beRepaired(32);
	st.guardGate();
}