#pragma once
#include <iostream>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
private:
		/*private members*/
	RobotomyRequestForm(void);
public:
	RobotomyRequestForm(const RobotomyRequestForm& copy);
	RobotomyRequestForm(const std::string& target);
	~RobotomyRequestForm(void);

	RobotomyRequestForm&	operator= (const RobotomyRequestForm& copy);

	void	action() const;
};
