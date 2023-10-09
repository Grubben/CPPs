#include "PmergeMe.hpp"
#include <cstdlib>
#include <stdexcept>

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
