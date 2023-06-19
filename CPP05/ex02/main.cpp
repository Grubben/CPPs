#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main()
{
	Bureaucrat	Jerry("Jerry", 3);
	// AForm		SNS("SNS", 0, 35, 20);
	ShrubberyCreationForm shrub("home");
	RobotomyRequestForm robot("Yolanda");
	PresidentialPardonForm pres("Snowden");

	Jerry.signForm(shrub);
	Jerry.executeForm(shrub);

	Jerry.signForm(robot);
	Jerry.executeForm(robot);

	Jerry.signForm(pres);
	Jerry.executeForm(pres);
}