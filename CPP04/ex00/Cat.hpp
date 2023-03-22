#pragma once
#include "Animal.hpp"

class Cat : public Animal
{
private:
	std::string derType;
public:
	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat	&operator= (const Cat &copy);

	void makeSound() const;
};