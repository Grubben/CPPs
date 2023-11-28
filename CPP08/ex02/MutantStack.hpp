#pragma once
#include <iostream>
#include <stack>

// #define std::stack<T> stack

// template <typename T, typename Container = std::deque<T> >
// class MutantStack : public std::stack<T,Container>
template <typename T>
class MutantStack : public std::stack<T>
{
public:
	MutantStack() : std::stack<T>()
	{}
	MutantStack(const MutantStack& copy) : std::stack<T>(copy)
	{
		std::cout << "Mutantstack copy constructor called" << std::endl;
		*this = copy;
	}
	~MutantStack()
	{}

	MutantStack&	operator= (const MutantStack& copy)
	{
		std::cout << "MutantStack = operator overload called" << std::endl;
		std::stack<T>::operator=(copy);
 		return *this;
	}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typename std::stack<T>::container_type::iterator begin()
	{
		return std::stack<T>::c.begin();
	}

	typename std::stack<T>::container_type::iterator end()
	{
		return std::stack<T>::c.end();
	}
};