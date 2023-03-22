#pragma once
#include <string>
#include <iostream>

class Animal
{
protected:
	std::string type;
public:
	Animal();
	Animal(const Animal& animal);
	Animal(std::string newType);
	virtual ~Animal();

	Animal	&operator= (const Animal &copy);

	std::string	getType() const;

	virtual void makeSound() const = 0;
};
