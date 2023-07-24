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
	size_t	shortestSpan();
	size_t	longestSpan();
};
