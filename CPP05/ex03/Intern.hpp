#pragma once
#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern
{
private:
		/*private members*/
	Intern(const Intern& copy);
public:
	Intern(void);
	~Intern(void);

	Intern&	operator= (const Intern& copy);

	AForm*	makeForm(const std::string& type, const std::string& target) const;
};
