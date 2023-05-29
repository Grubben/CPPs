#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inv[i] = nullptr;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "Destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	if (this != &copy)
	{
		inv[0] = copy.inv[0];
		inv[1] = copy.inv[1];
		inv[2] = copy.inv[2];
		inv[3] = copy.inv[3];
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* amat)
{
	for (int i = 0; i < 4; i++)
	{
		if (inv[i] == nullptr)
		{
			inv[i] = amat;
			return ;
		}
	}
	std::cout << "Cannot learn. Inventory is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	AMateria*	newmat = nullptr;

	for (int i = 3; i >= 0; i--)
	{
		if (inv[i] != nullptr && inv[i]->getType() == type)
		{
			newmat = inv[i]->clone();
		}
	}
	return (newmat);
}
