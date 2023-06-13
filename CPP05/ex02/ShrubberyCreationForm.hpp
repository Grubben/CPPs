#pragma once
#include <iostream>
#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
private:
		/*private members*/
	ShrubberyCreationForm(void);
public:
	ShrubberyCreationForm(const std::string& target);
	ShrubberyCreationForm(const ShrubberyCreationForm& copy);
	~ShrubberyCreationForm(void);

	ShrubberyCreationForm&	operator= (const ShrubberyCreationForm& copy);

	void	action() const;
};
