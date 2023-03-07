#include "Zombie.hpp"

void	randomChump(std::string name);
Zombie	*newZombie(std::string name);



int	main(void)
{

	randomChump("Jo");
	randomChump("May");


	delete newZombie("Marvin");
	delete newZombie("Medge");
}
