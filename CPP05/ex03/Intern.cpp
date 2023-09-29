#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "Intern constructor called" << std::endl;
}

Intern::Intern(const Intern& copy)
{
	std::cout << "Intern copy constructor called" << std::endl;
	*this = copy;
}

Intern::~Intern(void)
{
	std::cout << "Intern destructor called" << std::endl;
}

Intern&	Intern::operator= (const Intern& copy)
{
	std::cout << "Intern assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

AForm*	Intern::makeForm(const std::string& type, const std::string& target ) const
{
	if (type == std::string("robotomy request"))
		return new RobotomyRequestForm(target);
	else if (type == "presidentialpardon form")
		return new PresidentialPardonForm(target);
	else if (type == "shrubbery creation form")
		return new ShrubberyCreationForm(target);
	else
		return NULL;
}