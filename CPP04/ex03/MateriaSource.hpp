#pragma once
#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};

class MateriaSource : public IMateriaSource
{
private:
	AMateria*	inv[4];
public:
	MateriaSource(void);
	MateriaSource(const MateriaSource& copy);
	~MateriaSource(void);

	MateriaSource&	operator = (const MateriaSource& copy);

	void		learnMateria(AMateria* amat);
	AMateria*	createMateria(std::string const &type);
};

#endif
