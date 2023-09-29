#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void)
	: AForm()
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string& target)
	: AForm(target, 0, 145, 137)
{
	std::cout << "ShrubberyCreationForm constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
	: AForm(copy)
{
	std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
	*this = copy;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator= (const ShrubberyCreationForm& copy)
{
	std::cout << "ShrubberyCreationForm assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);

}

void	ShrubberyCreationForm::action() const
{
	std::ofstream	outfile((this->getName() + "_shrubbery").c_str());
	outfile << "	   _-_        \n";
	outfile << "    /~~   ~~\\    \n";	
	outfile << " /~~         ~~\\ \n";
	outfile << "{               }\n";
	outfile << " \\  _-     -_  / \n";
	outfile << "   ~  \\ //  ~   \n";
	outfile << "_- -   | | _- _  \n";
	outfile << "  _ -  | |   -_  \n";
	outfile << "      // \\      \n";
	outfile << std::endl;
	outfile.close();
}