#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void)
	: AForm()
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& copy)
	: AForm(copy)
{
	std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target)
	: AForm(target, 0, 72, 45)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

RobotomyRequestForm&	RobotomyRequestForm::operator= (const RobotomyRequestForm& copy)
{
	std::cout << "RobotomyRequestForm assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);

}

void	RobotomyRequestForm::action() const
{
	std::cout << "Drilling Noises\n";
	if (std::rand() > RAND_MAX)
		std::cout << this->getName() << " has been robotomized";
	else
		std::cout << this->getName() << " robotomization failed";
	std::cout << std::endl;
}
