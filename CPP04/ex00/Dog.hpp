#pragma once
#include "Animal.hpp"

class Dog : public Animal
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
