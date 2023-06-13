#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main()
{
	Bureaucrat	Jerry("Jerry", 36);
	Form		SNS("SNS", 0, 35, 20);

	Jerry.signForm(SNS);
	// SNS.beSigned(Jerry);
}