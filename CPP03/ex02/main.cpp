#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>
#include <cmath>

int	main(void)
{
	ScavTrap st("buff kid");
	st.attack("school bully");
	st.takeDamage(43);
	st.beRepaired(32);
	st.guardGate();

	FragTrap ft("buff kid");
	ft.attack("school bully");
	ft.takeDamage(43);
	ft.beRepaired(32);
	ft.highFivesGuys();
}