#pragma once
#include <iostream>
#include <exception>

class Form;

class Bureaucrat
{
private:
	const std::string	name;
	int					grade;
	Bureaucrat(void);
	Bureaucrat&			operator= (const Bureaucrat& copy);
public:
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat& copy);
	Bureaucrat(const std::string buname, int bugrade);

	Bureaucrat&			operator--();
	// Bureaucrat			operator--(int);
	Bureaucrat&			operator++();
	// Bureaucrat			operator++(int);


	void	signForm(Form& tosign) const;

	const std::string&	getName() const;
	const int&			getGrade() const;

	class GradeTooHighException : public std::exception {
		public:
			virtual const char* what() const _NOEXCEPT {
				return "GradeTooHighException";
			}
	};
	class GradeTooLowException : public std::exception {
		public:
			virtual const char* what() const _NOEXCEPT {
				return "GradeTooLowException";
			}
	};
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);
