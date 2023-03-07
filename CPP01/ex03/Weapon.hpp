#pragma once
#include <string>

class Weapon
{
private:
	std::string type;

public:
	Weapon();
	Weapon(std::string weaptype);
	~Weapon();

	std::string &getType();
	void		setType(std::string);
};
