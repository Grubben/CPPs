#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Destructor called" << std::endl;
}

Ice::Ice(Ice const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Ice	&Ice::operator = (const Ice &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

AMateria*	Ice::clone() const
{
	return (new Ice);
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() 	<< std::endl;
}