#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	Brain		*brain;
public:
	Cat();
	Cat(const Cat &copy);
	virtual ~Cat();

	Cat	&operator= (const Cat &copy);

	void makeSound() const;

};
