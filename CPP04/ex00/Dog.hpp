#pragma once
#include "Animal.hpp"

class Dog : virtual public Animal
{
private:
	std::string derType;
public:
	Dog();
	Dog(const Dog &copy);
	~Dog();

	Dog	&operator= (const Dog &copy);

	void makeSound() const;
};
