#include "Character.hpp"

void	setinvent(AMateria* inv[4])
{
	for (int i = 0; i < 4; i++)
	{
		inv[i] = NULL;
	}
}

Character::Character(void)
	: name("UnNamed")
{
	std::cout << "Character Constructor called" << std::endl;
	setinvent(this->inv);
}

Character::Character(std::string const& name)
	: name(name)
{
	std::cout << "Character Constructor called" << std::endl;
	setinvent(this->inv);
}


Character::Character(const Character &copy)
{
	std::cout << "Character Copy constructor called" << std::endl;
	setinvent(this->inv);
	*this = copy;
}

Character::~Character(void)
{
	std::cout << "Character Destructor called" << std::endl;
	delete inv[0];
	delete inv[1];
	delete inv[2];
	delete inv[3];
}

Character	&Character::operator = (const Character &copy)
{
	std::cout << "Character Assignation operator called" << std::endl;
	name = copy.name;
	for (unsigned int i = 0; i < 4; i++)
	{
		delete inv[i];
		if (copy.inv[i])
			inv[i] = copy.inv[i]->clone();
	}
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
		if (inv[i] == m)
		{
			std::cout << "Already equipped" << std::endl;
			return;
		}
	}
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == NULL)
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
	{
		if (inv[idx])
		{
			std::cout << "Unequipped " << inv[idx]->getType() << std::endl;
			inv[idx] = NULL;
		}
		else
			std::cout << "Nothing to unequip here" << std::endl;
	}
}
void	Character::use(int idx, ICharacter& target)
{
	if (idx >=0 && idx <= 3 && inv[idx] != NULL)
	{
		inv[idx]->use(target);
	}
}