#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include <iostream>
#include <string>
#include "ICharacter.hpp"

#include "AMateria.hpp"

class Character : public ICharacter
{
protected:
	std::string name;
	AMateria	*inv[4];
public:

	Character(void);
	Character(std::string const& name);
	Character(const Character &copy);
	virtual ~Character(void);

	Character	&operator = (const Character &copy);

	virtual std::string const & getName() const;
	virtual void equip(AMateria* m);
	virtual void unequip(int idx);
	virtual void use(int idx, ICharacter& target);
};

#endif
