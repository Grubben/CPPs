#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
		T*	arr;
		unsigned int len;
public:
	Array(void)
	{
		std::cout << "Array constructor called" << std::endl;
		this->arr = new T[0];
		len = 0;
	}
	Array(unsigned int n)
	{
		std::cout << "Array constructor called" << std::endl;
		arr = new T[n];
		len = n;
	}
	Array(const Array<T>& copy)
	{
		std::cout << "Array copy constructor called" << std::endl;
		*this = copy;
	}
	~Array(void)
	{
		std::cout << "Array destructor called" << std::endl;
		if (this->arr != NULL)
		{
			delete[] this->arr;
			// this->arr = NULL;
			// this->len = 0;
		}
	}

	Array&	operator= (const Array& copy)
	{
		std::cout << "Array assignment operator called" << std::endl;
		if (this != &copy)
		{
			len = copy.len;
			arr = new T[len];
			for (unsigned int i = 0; i < len; i++)
			{
				arr[i] = copy[i];
			}	
		}
		return (*this);
	}
	class IdxRange : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "Idx out of Range";
			}
	};
	T&	operator[] (unsigned int idx) const
	{
		if (idx >= len)
			throw IdxRange();
		return arr[idx];
	}

	unsigned int size(void) const
	{
		return len;
	}
};