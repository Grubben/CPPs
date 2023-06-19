#pragma once
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
		/*private members*/
	RobotomyRequestForm(void);
	RobotomyRequestForm(const RobotomyRequestForm& copy);
public:
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm(void);

	RobotomyRequestForm&	operator= (const RobotomyRequestForm& copy);

	void	action() const;
};
