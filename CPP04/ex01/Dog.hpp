#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
private:
	std::string type;
	Brain		*brain;
public:
	Dog();
	Dog(const Dog &copy);
	virtual ~Dog();

	Dog	&operator= (const Dog &copy);

	void makeSound() const;
};
