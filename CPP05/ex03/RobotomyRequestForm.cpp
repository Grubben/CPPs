#include "RobotomyRequestForm.hpp"
#include <random>

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
	/*Overkill on the random but it's correct*/
	std::random_device	rd;
	std::mt19937 mt(rd());
	std::uniform_int_distribution<bool> dist01(0, 1);

	std::cout << "Drilling Noises\n";
	if (dist01(mt))
		std::cout << this->getName() << " has been robotomized";
	else
		std::cout << this->getName() << " robotomization failed";
	
	std::cout << std::endl;
}
