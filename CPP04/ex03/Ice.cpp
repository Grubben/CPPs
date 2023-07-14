#include "Ice.hpp"

Ice::Ice(void)
	: AMateria("ice")
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice Destructor called" << std::endl;
}

Ice::Ice(Ice const& copy)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = copy;
}

Ice	&Ice::operator = (const Ice &copy)
{
	std::cout << "Ice Assignation operator called" << std::endl;
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