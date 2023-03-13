#pragma once
#include <string>
#include <iostream>

class Animal
{
private:
	std::string type;
public:
	Animal();
	Animal(const Animal& animal);
	Animal(std::string newType);
	~Animal();

	std::string	getType() const;

	void makeSound() const;
};
