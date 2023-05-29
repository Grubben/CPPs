#include "Cure.hpp"

Cure::Cure(void)
	: AMateria("cure")
{
	std::cout << "Constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Destructor called" << std::endl;
}

Cure::Cure(Cure const& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Cure	&Cure::operator = (const Cure &copy)
{
	std::cout << "Assignation operator called" << std::endl;
	type = copy.type;
	return (*this);
}

AMateria*	Cure::clone() const
{
	return (new Cure);
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "'s wounds" << std::endl;
}