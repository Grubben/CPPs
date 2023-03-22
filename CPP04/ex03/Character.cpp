#include "Character.hpp"

Character::Character(void)
{
	std::cout << "Constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Destructor called" << std::endl;
}

Character::Character(const Character &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Character	&Character::operator = (const Character &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
}

std::string const &Character::getName() const
{
	return name;
}

void	Character::equip(AMateria* m)
{

}

void	Character::unequip(int idx)
{

}
void	Character::use(int idx, ICharacter& target)
{
	
}