#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(std::string newType);
	Animal(const Animal& animal);
	virtual ~Animal();

	Animal	&operator= (const Animal &copy);

	std::string	getType() const;

	virtual void makeSound() const;
};
