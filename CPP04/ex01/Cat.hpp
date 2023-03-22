#pragma once
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
private:
	std::string derType;
	Brain		*brain;
public:
	Cat();
	Cat(const Cat &copy);
	~Cat();

	Cat	&operator= (const Cat &copy);

	void makeSound() const;
};
