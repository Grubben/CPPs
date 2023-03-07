#include "Zombie.hpp"

Zombie	*newZombie(std::string name)
{
	Zombie *zomb;

	zomb = new Zombie(name);
	return (zomb);
}
