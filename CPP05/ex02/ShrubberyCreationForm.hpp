#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
		/*private members*/
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
public:
	ShrubberyCreationForm(const std::string& target);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& copy);

	void	action() const;
};
