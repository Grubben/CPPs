#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy;
}

AMateria::AMateria(std::string const & type)
{
    this->type = type;
}

AMateria::~AMateria(void)
{
    std::cout << "Destructor called" << std::endl;
}


AMateria	&AMateria::operator = (const AMateria &copy)
{
    std::cout << "Assignation operator called" << std::endl;
    type = copy.type;
    return (*this);
}

std::string const	&AMateria::getType() const
{
    return (type);
}

void	AMateria::use(ICharacter& target)
{
	std::cout << type << "targets " << target.getName();
}