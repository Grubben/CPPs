#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	Zombie	*zho;

	zho = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		zho[i].setName(name);
	}
	(void)name;
	return (zho);
}