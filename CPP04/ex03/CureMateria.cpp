#include "CureMateria.hpp"

CureMateria::CureMateria(void)
	: AMateria("cure")
{
	std::cout << "Constructor called" << std::endl;
}

CureMateria::~CureMateria(void)
{
	std::cout << "Destructor called" << std::endl;
}

CureMateria::CureMateria(CureMateria const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

CureMateria	&CureMateria::operator = (const CureMateria &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

AMateria*	CureMateria::clone() const
{
	return (new CureMateria);
}

void	CureMateria::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}