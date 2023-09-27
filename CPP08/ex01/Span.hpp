#pragma once
#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
private:
	
	std::vector<int>	vec;

	Span(void);
public:
	Span(unsigned int N);
	Span(const Span& copy);
	~Span(void);

	Span&	operator= (const Span& copy);

	void	addNumber(int addme);

	template <typename C>
	void	add(C range)
	{
		for (typename C::iterator it = range.begin(); it != range.end(); it++)
		{
			addNumber(*it);
		}
	}
	template <typename InputIt>
	void	add(InputIt first, InputIt last)
	{
		for (; first != last; first++)
			addNumber(*first);
	}

	size_t	shortestSpan();
	size_t	longestSpan();
};
