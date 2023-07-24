#include "Span.hpp"

Span::Span(void)
{
	std::cout << "Span constructor called" << std::endl;
}

Span::Span(unsigned int N)
{
	std::cout << "Span constructor called" << std::endl;
	vec.reserve(N);
}

Span::Span(const Span& copy)
{
	std::cout << "Span copy constructor called" << std::endl;
	*this = copy;
}

Span::~Span(void)
{
	std::cout << "Span destructor called" << std::endl;
}

Span&	Span::operator= (const Span& copy)
{
	std::cout << "Span assignment operator called" << std::endl;
	if (this != &copy)
	{
		vec = copy.vec;
	}
	return (*this);
}

void	Span::addNumber(int addme)
{
	if (vec.size() >= vec.capacity())
		throw std::domain_error("Span is already full");
	else
		vec.push_back(addme);
}

size_t	Span::shortestSpan()
{
	if (vec.size() < 2)
		throw std::length_error("Not enough numbers in Span");

	std::vector<int>	temp(vec);

	std::sort(temp.begin(), temp.end());
	// std::cout << temp[0] << std::endl;
	// std::cout << temp[1] << std::endl;
	// std::cout << temp[2] << std::endl;

	int mindiff = temp[1] - temp[0];
	// std::cout << mindiff << std::endl;

	for (unsigned int i = 1; i < temp.size(); i++)
	{
		if (temp[i] - temp[i - 1] < mindiff)
		{
			mindiff = temp[i] - temp[i - 1];
			// std::cout << mindiff << std::endl;
		}
	}
	
	return mindiff;
}

size_t	Span::longestSpan()
{
	if (vec.size() > 1)
		return (*std::max_element(vec.begin(), vec.end()) - *std::min_element(vec.begin(), vec.end()));
	else
		throw std::length_error("Not enough numbers in Span");
}