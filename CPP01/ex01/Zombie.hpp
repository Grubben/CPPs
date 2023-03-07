#pragma once
#include <string>

class Zombie
{
private:
	std::string	name;

public:
	Zombie();
	Zombie(std::string name);
	~Zombie();

	void	announce(void);
	void	setName(std::string name);
};