#pragma once
#include <iostream>
#include <exception>

class AForm;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat(void);
	Bureaucrat&			operator= (const Bureaucrat& copy);
public:
	virtual ~Bureaucrat(void);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat(const std::string buname, int bugrade);

	Bureaucrat&			operator--();
	// Bureaucrat			operator--(int);
	Bureaucrat&			operator++();
	// Bureaucrat			operator++(int);


	void	signForm(AForm& tosign) const;
	void	executeForm(const AForm& form) const;

	const std::string&	getName() const;
	const int&			getGrade() const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "GradeTooHighException";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const throw() {
				return "GradeTooLowException";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
