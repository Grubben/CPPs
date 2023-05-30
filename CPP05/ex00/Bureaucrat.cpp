#include "Bureaucrat.hpp"

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Destructor called" << std::endl;
}

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

Bureaucrat::Bureaucrat(const std::string buname, int bugrade)
	: name(buname)
	, grade(bugrade)
{
	std::cout << "Constructor called" << std::endl;
	if (bugrade < 0)
		throw GradeTooHighException();
	else if (bugrade > 150)
		throw GradeTooLowException();
}


Bureaucrat&	Bureaucrat::operator= (const Bureaucrat& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	(void)copy;
	return (*this);
}
Bureaucrat&			Bureaucrat::operator--()
{
	if (grade > 149)
		throw GradeTooLowException();
	this->grade++;
	return (*this);
}
// Bureaucrat			operator--(int);
Bureaucrat&			Bureaucrat::operator++()
{
	if (grade < 2)
		throw GradeTooHighException();
	this->grade--;
	return (*this);
}
// Bureaucrat			operator++(int);

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj)
{
	return (os << obj.getName() << ", bureaucrat grade " << obj.getGrade());
}


const std::string&	Bureaucrat::getName() const
{
	return (this->name);
}
const int&			Bureaucrat::getGrade() const
{
	return (this->grade);
}
