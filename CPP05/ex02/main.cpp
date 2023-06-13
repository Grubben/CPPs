#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

int	main()
{
	Bureaucrat	Jerry("Jerry", 36);
	// AForm		SNS("SNS", 0, 35, 20);
	ShrubberyCreationForm SCF("planter");
	Jerry.signForm(SCF);
	Jerry.executeForm(SCF);
}