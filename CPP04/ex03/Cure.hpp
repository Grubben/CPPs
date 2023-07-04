#ifndef Cure_HPP
# define Cure_HPP

# include "AMateria.hpp"
# include <iostream>

class Cure : public AMateria
{
private:
	/*private members*/
public:
	Cure(void);
	Cure(Cure const& copy);
	Cure(std::string const& type);
	virtual ~Cure(void);


	Cure	&operator = (const Cure &copy);

	AMateria*	clone() const;
	void		use(ICharacter& target);
	
};

#endif
