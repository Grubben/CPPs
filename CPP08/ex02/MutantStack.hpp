#pragma once
#include <iostream>
#include <stack>

// #define std::stack<T> stack

template <typename T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
public:
	MutantStack() : std::stack<T>()
	{}
	MutantStack(const MutantStack& copy) : std::stack<T>(copy)
	{
		*this = copy;
	}
	~MutantStack()
	{}

	MutantStack&	operator= (const MutantStack& copy)
	{
		std::stack<T,Container>::operator=(copy);
	}

	typename std::stack<T,Container>::container_type::iterator begin()
	{
		return std::stack<T,Container>::c.begin();
	}

	typename std::stack<T,Container>::container_type::iterator end()
	{
		return std::stack<T,Container>::c.end();
	}
};