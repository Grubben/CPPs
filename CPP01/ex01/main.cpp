#include "Zombie.hpp"
#include <iostream>

Zombie*    zombieHorde( int N, std::string name );


int	main(void)
{
	Zombie	*horde = zombieHorde(8, "Jane");
	delete []horde;
	// delete horde;
}
