#include "PmergeMe.hpp"
#include <cstdlib>
#include <stdexcept>
#include <ctime>
#include <algorithm>
PmergeMe::PmergeMe(int argsn, char *args[])
{
	// std::cout << "PmergeMe constructor called" << std::endl;
	for (int i = 0; i < argsn; i++)
	{
		const std::string arg = args[i];
		int tmp = std::atoi(args[i]);
		if (tmp == 0 && arg.find_first_not_of("0") != std::string::npos)
		{
			throw std::runtime_error("bad number given");
		}
		if (tmp < 0)
			throw std::runtime_error("negative value given");
		dtvec.push_back(tmp);
		dtlist.push_back(tmp);
	}
}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	// std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = copy;
}

PmergeMe::~PmergeMe(void)
{
	// std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &copy)
{
	// std::cout << "PmergeMe assignment operator called" << std::endl;
	if (this != &copy)
	{
		dtvec = copy.dtvec;
		dtlist = copy.dtlist;
	}
	return (*this);
}

/*	MICROSECONDS	*/


void PmergeMe::showSorted()
{
	// time_t start, stop;
	clock_t start, stop;
	std::cout << "Before:" << dtvec << std::endl;

	// time(&start);
	start = clock();
	std::sort(dtvec.begin(), dtvec.end());
	// time(&stop);
	stop = clock();

	std::cout << "After:" << dtvec << std::endl;

	std::cout << "Time to process a range of " << dtvec.size() << " elements with std::vector : ";
	std::cout << stop - start << " us" << std::endl;

	// time(&start);
	start = clock();
	dtlist.sort();
	// std::sort(dtlist.begin(), dtlist.end()); //for deque
	// time(&stop);
	stop = clock();

	std::cout << "Time to process a range of " << dtlist.size() << " elements with std::list : ";
	std::cout << stop - start << " us" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const std::list<int> &dtlist)
{
	for (std::list<int>::const_iterator it = dtlist.begin(); it != dtlist.end(); it++)
	{
		int tmp = *it;
		os << " " << tmp;
	}
	return os;
}

std::ostream &operator<<(std::ostream &os, const std::vector<int> &dtvector)
{
	for (std::vector<int>::const_iterator it = dtvector.begin(); it != dtvector.end(); it++)
	{
		int tmp = *it;
		os << " " << tmp;
	}
	return os;
}