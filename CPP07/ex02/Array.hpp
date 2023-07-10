#pragma once
#include <iostream>

template <typename T>
class Array
{
private:
		T*	arr;
public:
	Array(void);
	Array(const Array& copy);
	~Array(void);

	Array&	operator= (const Array& copy);
};
