#ifndef CUREMATERIA_HPP
# define CUREMATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class CureMateria : public AMateria
{
private:
	/*private members*/
public:
	CureMateria(void);
	CureMateria(CureMateria const& copy);
	CureMateria(std::string const& type);
	~CureMateria(void);


	CureMateria	&operator = (const CureMateria &copy);

	AMateria*	clone() const;
	void		use(ICharacter& target);
	
};

#endif
