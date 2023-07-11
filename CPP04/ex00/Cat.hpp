#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
public:
	Cat();
	Cat(const Cat &copy);
	virtual ~Cat();

	Cat	&operator= (const Cat &copy);

	void makeSound() const;
};
