#pragma once
#include <iostream>
#include <string>

#include "ICharacter.hpp"

class AMateria
{
protected:
    std::string type;
public:
    AMateria(void);
    AMateria(const AMateria &copy);
    AMateria(std::string const & type);
    virtual ~AMateria(void);

    AMateria	&operator = (const AMateria &copy);

    std::string const & getType() const; //Returns the materia type

    virtual AMateria* clone() const = 0;
    virtual void use(ICharacter& target);
};