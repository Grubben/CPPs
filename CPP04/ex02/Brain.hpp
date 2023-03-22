#pragma once

#include <string>
#include <iostream>

class Brain
{
private:
	/* data */
public:
	Brain();
	Brain(const Brain &copy);
	~Brain();

	Brain	&operator= (const Brain &copy);

	std::string	ideas[100];
};
