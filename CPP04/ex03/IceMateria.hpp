#ifndef ICEMATERIA_HPP
# define ICEMATERIA_HPP

# include "AMateria.hpp"
# include <iostream>

class IceMateria : public AMateria
{
private:
	/*private members*/
public:
	IceMateria(void);
	IceMateria(IceMateria const& copy);
	IceMateria(std::string const& type);
	~IceMateria(void);


	IceMateria	&operator = (const IceMateria &copy);

	AMateria*	clone() const;
	void		use(ICharacter& target);
	
};

#endif
