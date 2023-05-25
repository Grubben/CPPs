#include "Character.hpp"

void	setinvent(AMateria* inv[4])
{
	for (int i = 0; i < 4; i++)
	{
		inv[i] = nullptr;
	}
}

Character::Character(void)
	: name("UnNamed")
{
	std::cout << "Constructor called" << std::endl;
	setinvent(this->inv);
	
}

Character::Character(std::string const& name)
	: name(name)
{
	std::cout << "Constructor called" << std::endl;
	setinvent(this->inv);
}


Character::Character(const Character &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
	setinvent(this->inv);
}

Character::~Character(void)
{
	std::cout << "Destructor called" << std::endl;
}

Character	&Character::operator = (const Character &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	name = copy.name;
	inv[0] = copy.inv[0];
	inv[1] = copy.inv[1];
	inv[2] = copy.inv[2];
	inv[3] = copy.inv[3];
	return (*this);
}

std::string const &Character::getName() const
{
	return (name);
}

void	Character::equip(AMateria* m)
{
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == nullptr)
		{
			inv[i] = m;
			return ;
		}
	}
	std::cout << "Cannot equip. Inventory is full" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx >= 0 && idx <= 3)
		inv[idx] = nullptr;
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx <= 3 && inv[idx] != nullptr)
	{
		inv[idx]->use(target);
	}
}