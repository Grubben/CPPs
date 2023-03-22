#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor called" << std::endl; 
}

Brain::Brain(const Brain &copy)
{
	std::cout << "Brain copy constructor called" << std::endl; 
	*this = copy;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain	&Brain::operator= (const Brain &copy)
{
	if (this != &copy)
	{
		for(size_t i = 0; i < 100; i++)
		{
			ideas[i] = copy.ideas[i];
		}
	}
	return (*this);
}