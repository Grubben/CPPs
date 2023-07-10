#include "Array.hpp"

Array::Array(void)
{
	std::cout << "Array constructor called" << std::endl;
}

Array::Array(const Array& copy)
{
	std::cout << "Array copy constructor called" << std::endl;
	*this = copy;
}

Array::~Array(void)
{
	std::cout << "Array destructor called" << std::endl;
}

Array&	Array::operator= (const Array& copy)
{
	std::cout << "Array assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}
