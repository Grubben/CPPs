#pragma once
#ifndef PMERGEME_H
# define PMERGEME_H
#include <iostream>
#include <vector>
#include <list>
#include <deque>

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


std::ostream&	operator<<(std::ostream& os, const std::list<int>& dtlist);

std::ostream&	operator<<(std::ostream& os, const std::vector<int>& dtvector);

#endif