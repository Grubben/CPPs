#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy)
	: AForm(copy)
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target)
	: AForm(target, 0, 25, 5)
{
	std::cout << "PresidentialPardonForm constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

PresidentialPardonForm&	PresidentialPardonForm::operator= (const PresidentialPardonForm& copy)
{
	std::cout << "PresidentialPardonForm assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

void	PresidentialPardonForm::action() const
{
	std::cout << this->getName() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}