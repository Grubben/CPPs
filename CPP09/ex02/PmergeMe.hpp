#pragma once
#ifndef PMERGEME_H
#define PMERGEME_H
#include <iostream>
#include <vector>
#include <list>
#include <deque>

class PmergeMe
{
private:
	std::vector<int> dtvec;
	std::deque<int> dtque;

public:
	PmergeMe(int argsn, char *args[]);
	PmergeMe(const PmergeMe &copy);
	~PmergeMe(void);

	PmergeMe &operator=(const PmergeMe &copy);

	std::vector<int> sorted(std::vector<int>& cont);
	std::deque<int> sorted(std::deque<int>& cont);

	void showSorted();
};

std::ostream &operator<<(std::ostream &os, const std::deque<int> &dtque);

std::ostream &operator<<(std::ostream &os, const std::vector<int> &dtvector);

#endif