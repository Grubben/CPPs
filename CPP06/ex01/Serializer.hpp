#pragma once
#include <iostream>
#include "Data.hpp"

class Serializer
{
private:
		/*private members*/
public:
	Serializer(void);
	Serializer(const Serializer& copy);
	virtual ~Serializer(void);

	Serializer&	operator= (const Serializer& copy);

	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);
};
