#ifndef Ice_HPP
# define Ice_HPP

# include "AMateria.hpp"
# include <iostream>

class Ice : public AMateria
{
private:
	/*private members*/
public:
	Ice(void);
	Ice(Ice const& copy);
	Ice(std::string const& type);
	virtual ~Ice(void);


	Ice	&operator = (const Ice &copy);

	AMateria*	clone() const;
	void		use(ICharacter& target);
	
};

#endif
