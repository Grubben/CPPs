#pragma once
#include <iostream>
#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
		/*private members*/
	PresidentialPardonForm(void);
	PresidentialPardonForm(const PresidentialPardonForm& copy);
public:
	PresidentialPardonForm(const std::string& target);
	~PresidentialPardonForm(void);

	PresidentialPardonForm&	operator= (const PresidentialPardonForm& copy);

	void	action() const;
};
