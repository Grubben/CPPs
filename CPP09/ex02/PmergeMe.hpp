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
};
