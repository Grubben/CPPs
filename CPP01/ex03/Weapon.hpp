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

	const std::string &getType();
	void		setType(std::string);
};
