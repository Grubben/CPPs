#include "Weapon.hpp"

Weapon::Weapon()
{
	type = "";
}
Weapon::Weapon(std::string weaptype)
{
	setType(weaptype);
}

Weapon::~Weapon()
{
}

const std::string	&Weapon::getType(void)
{
	return (this->type);
}

void	Weapon::setType(std::string weaptype)
{
	type = weaptype;
}