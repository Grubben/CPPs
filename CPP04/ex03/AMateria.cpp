#include "AMateria.hpp"

AMateria::AMateria(void)
{
    std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria(const AMateria &copy)
{
    std::cout << "AMateria Copy constructor called" << std::endl;
    *this = copy;
}

AMateria::AMateria(const std::string& type)
{
    this->type = type;
}

AMateria::~AMateria(void)
{
    std::cout << "AMateria Destructor called" << std::endl;
}


AMateria	&AMateria::operator = (const AMateria &copy)
{
    std::cout << "AMateria Assignment operator called" << std::endl;
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