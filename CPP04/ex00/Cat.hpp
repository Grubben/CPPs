#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string derType;
public:
	Cat();
	~Cat();

	void	makeSound();
};
