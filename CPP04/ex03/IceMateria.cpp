#include "IceMateria.hpp"

IceMateria::IceMateria(void)
	: AMateria("ice")
{
	std::cout << "Constructor called" << std::endl;
}

IceMateria::~IceMateria(void)
{
	std::cout << "Destructor called" << std::endl;
}

IceMateria::IceMateria(IceMateria const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

IceMateria	&IceMateria::operator = (const IceMateria &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

AMateria*	IceMateria::clone() const
{
	return (new IceMateria);
}

void	IceMateria::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() 	<< std::endl;
}