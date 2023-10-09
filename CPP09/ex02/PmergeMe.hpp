#pragma once
#include <iostream>
#include <chrono>
#include <vector>
#include <list>

class PmergeMe
{
private:
	std::vector<int>	dtvec;
	std::list<int>		dtlist;
public:
	PmergeMe(int argsn, char *args[]);
	PmergeMe(const PmergeMe& copy);
	~PmergeMe(void);

	PmergeMe&	operator= (const PmergeMe& copy);

	void	showSorted();
};


template <typename C>
std::ostream&	operator<<(std::ostream& os, const std::list<int>& dtlist)
{
	for (std::list<int>::const_iterator it = dtlist.begin(); it != dtlist.end(); it++)
	{
		os << *it << " ";
	}
	return os;
}