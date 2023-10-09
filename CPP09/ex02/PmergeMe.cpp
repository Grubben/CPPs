#include "PmergeMe.hpp"
#include <cstdlib>
#include <stdexcept>
#include <ctime>

PmergeMe::PmergeMe(int argsn, char *args[])
{
	std::cout << "PmergeMe constructor called" << std::endl;
	for (int i = 0; i < argsn; i++)
	{
		const std::string arg = args[i];
		int tmp = std::atoi(args[i]);
		if (tmp == 0 && arg.find_first_not_of("0") != std::string::npos)
		{
			throw std::runtime_error("bad number given");
		}
		dtvec.push_back(tmp);
		dtlist.push_back(tmp);
	}
}

PmergeMe::PmergeMe(const PmergeMe& copy)
{
	std::cout << "PmergeMe copy constructor called" << std::endl;
	*this = copy;
}

PmergeMe::~PmergeMe(void)
{
	std::cout << "PmergeMe destructor called" << std::endl;
}

PmergeMe&	PmergeMe::operator= (const PmergeMe& copy)
{
	std::cout << "PmergeMe assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

/*	MICROSECONDS	*/

uint64_t	now()
{
	struct timespec ts;
	clock_gettime(CLOCK_MONOTONIC_RAW, &ts);
	return ts.tv_sec * 1000000 + ts.tv_nsec / 1000;
}

void	PmergeMe::showSorted()
{
	uint64_t	start = now();
	dtlist.sort();
	std::cout << now() - start << " us" << std::endl;
}