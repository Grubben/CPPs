#include "Ice.hpp"
#include "Cure.hpp"

#include "Character.hpp"
#include "MateriaSource.hpp"

int	main(void)
{

	int*	ptr = NULL;
	delete ptr;
	
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	
	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	Character* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);


	AMateria*	icemat = new Ice();
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	me->equip(icemat);
	// delete icemat;

	ICharacter*	cp = new Character(*bob);
	delete cp;
	
	delete bob;
	delete me;
	delete src;

	return 0;
}