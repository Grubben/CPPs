#pragma once
#include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
};