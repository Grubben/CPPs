#pragma once
#include "Animal.hpp"

class Dog : public Animal
{
private:
	std::string derType;
public:
	Dog();
	~Dog();

	void makeSound() const;
};
