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
		dtque.push_back(tmp);
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
		dtque = copy.dtque;
	}
	return (*this);
}

template <typename C>
bool isSorted(C &cont)
{
	for (typename C::iterator it = cont.begin(); it != cont.end() - 1; it++)
	{
		if (*it > *(it + 1))
			return false;
	}
	return true;
}

std::vector<int> PmergeMe::sorted(std::vector<int> &cont)
{
	std::vector<int> a;
	std::vector<int> b;

	for (std::vector<int>::iterator it = cont.begin(); it != cont.end(); it++)
	{
		b.push_back(*(it++));
		if (it == cont.end())
		{
			a.push_back(-1);
			break;
		}
		else
			a.push_back(*it);
	}

	for (std::size_t i = 0; i < b.size(); i++)
	{
		if (a[i] > b[i])
		{
			int tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
	}

	for (std::size_t i = 1; i < b.size(); i++)
	{
		std::size_t tmp = i;
		std::size_t temp2 = i - 1;
		while (tmp != 0 && b[tmp] < b[temp2])
		{
			std::swap(b[tmp], b[temp2]);
			std::swap(a[tmp], a[temp2]);
			--tmp;
			--temp2;
		}
	}
	// for (std::size_t i = 0; i < a.size(); i++)
	// 	std::cout << a[i] << " " << b[i] << std::endl;
	// std::cout << std::endl;

	std::vector<int> sorted(b);
	// sorted.reserve(dtvec.size());

	if (a[0] != -1)
		sorted.insert(sorted.begin(), a[0]);
	for (std::size_t i = 1; i < a.size(); i++)
	{
		if (a[i] == -1)
			continue;
		std::vector<int>::iterator pairpos = std::find(sorted.begin(), sorted.end(), b[i]);
		while (pairpos != sorted.begin() && a[i] < *(pairpos - 1))
			pairpos--;
		sorted.insert(pairpos, a[i]);
		// std::cout << sorted << std::endl
		// 		  << std::endl;
	}

	return sorted;
}

std::deque<int> PmergeMe::sorted(std::deque<int> &cont)
{
	std::deque<int> a;
	std::deque<int> b;

	for (std::deque<int>::iterator it = cont.begin(); it != cont.end(); it++)
	{
		b.push_back(*it);
		it++;
		if (it == cont.end())
		{
			a.push_back(-1);
			break;
		}
		else
			a.push_back(*it);
	}
	// std::cout << "here" << std::endl;

	for (std::size_t i = 0; i < b.size(); i++)
	{
		if (a[i] > b[i])
		{
			int tmp = a[i];
			a[i] = b[i];
			b[i] = tmp;
		}
	}

	for (std::size_t i = 1; i < b.size(); i++)
	{
		std::size_t tmp = i;
		std::size_t temp2 = i - 1;
		while (tmp != 0 && b[tmp] < b[temp2])
		{
			std::swap(b[tmp], b[temp2]);
			std::swap(a[tmp], a[temp2]);
			--tmp;
			--temp2;
		}
	}
	// for (std::size_t i = 0; i < a.size(); i++)
	// 	std::cout << a[i] << " " << b[i] << std::endl;
	// std::cout << std::endl;

	std::deque<int> sorted(b);
	if (a[0] != -1)
		sorted.insert(sorted.begin(), a[0]);
	for (std::size_t i = 1; i < a.size(); i++)
	{
		if (a[i] == -1)
			continue;
		std::deque<int>::iterator pairpos = std::find(sorted.begin(), sorted.end(), b[i]);
		while (pairpos != sorted.begin() && a[i] < *(pairpos - 1))
			pairpos--;
		sorted.insert(pairpos, a[i]);
		// std::cout << sorted << std::endl
		// 		  << std::endl;
	}

	return sorted;
}

void PmergeMe::showSorted()
{
	clock_t start, stop;
	// std::cout << "Before:" << dtvec << std::endl;

	start = clock();
	std::vector<int> tmpvec = sorted(dtvec);
	stop = clock();
	// std::cout << "After:" << tmpvec << std::endl;

	std::cout << "Time to process a range of " << dtvec.size() << " elements with std::vector : ";
	std::cout << (stop - start) << " microSeconds" << std::endl;

	// std::cout << "Before:" << dtque << std::endl;
	start = clock();
	std::deque<int> tmpdq = sorted(dtque);
	stop = clock();
	// std::cout << "After:" << tmpdq << std::endl;

	std::cout << "Time to process a range of " << dtque.size() << " elements with std::deque  : ";
	std::cout << stop - start << " microSeconds" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const std::deque<int> &dtdeque)
{
	for (std::deque<int>::const_iterator it = dtdeque.begin(); it != dtdeque.end(); it++)
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