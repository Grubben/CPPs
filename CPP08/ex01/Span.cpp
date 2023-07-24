#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(unsigned int N)
	: vec(N)
{
	std::cout << "Span constructor called" << std::endl;
	// capacity = N;
	// idx = 0;
	// storage = new int[N];
}
Span::Span(const Span& copy)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = copy;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
	// delete[] storage;
}

Span&	Span::operator= (const Span& copy)
{
	std::cout << "Span assignment operator called" << std::endl;
	if (this != &copy)
	{
		// capacity = copy.capacity;
		// idx = copy.idx;
		// delete[] storage;
		// storage = new int[capacity];
		// for (unsigned int i = 0; i < capacity; i++)
		// {
		// 	storage[i] = copy.storage[i];
		// }
		vec = copy.vec;
	}
	return (*this);
}

void	Span::addNumber(int addme)
{
	if (idx >= capacity)
		throw std::domain_error("Span is already full");
	else
	{
		storage[idx] = addme;
		idx++;
	}
}

size_t	Span::longestSpan()
{
	int	smallest = storage[0];
	for (size_t i = 0; i < capacity; i++)
	{
		if (storage[i] < smallest)
			smallest = storage[i];
	}
	int	biggest = storage[0];
	for (size_t i = 0; i < capacity; i++)
	{
		if (storage[i] > biggest)
			biggest = storage[i];
	}
	return (biggest - smallest);
}

size_t	Span::shortestSpan()
{

}