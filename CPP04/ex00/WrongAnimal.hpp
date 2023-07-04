#pragma once
#include <string>
#include <iostream>

class WrongAnimal
{
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal& animal);
	WrongAnimal(std::string newType);
	virtual ~WrongAnimal();

	WrongAnimal	&operator= (const WrongAnimal &copy);

	std::string	getType() const;

	void makeSound() const;
};
