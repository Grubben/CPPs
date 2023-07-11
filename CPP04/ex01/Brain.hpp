#pragma once

#include <string>
#include <iostream>

class Brain
{
public:
	std::string	ideas[100];

	Brain();
	Brain(const Brain &copy);
	virtual ~Brain();

	Brain	&operator= (const Brain &copy);

};
