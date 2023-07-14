#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	std::cout << "MateriaSource Constructor called" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		inv[i] = NULL;
	}
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource Destructor called" << std::endl;
	delete inv[0];
	delete inv[1];
	delete inv[2];
	delete inv[3];

}

MateriaSource::MateriaSource(const MateriaSource &copy)
{
	std::cout << "MateriaSource Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &copy)
{
	std::cout << "MateriaSource Assignation operator called" << std::endl;
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
		if (inv[i] == NULL)
		{
			inv[i] = amat;
			return ;
		}
	}
	std::cout << "Cannot learn. Inventory is full" << std::endl;
}

AMateria*	MateriaSource::createMateria(const std::string& type)
{
	AMateria*	newmat = NULL;

	for (int i = 3; i >= 0; i--)
	{
		if (inv[i] != NULL && inv[i]->getType() == type)
		{
			newmat = inv[i]->clone();
		}
	}
	return (newmat);
}
