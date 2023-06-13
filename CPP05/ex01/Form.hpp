#pragma once
#include <iostream>

class Bureaucrat;

class Form
{
private:
	const std::string	name;
	bool				isSigned;
	int					signReq;
	int					execReq;	
public:
	Form(void);
	Form(const Form& copy);
	Form(const std::string name, bool isSigned, int execReq, int signReq);
	~Form(void);

	Form&	operator= (const Form& copy);

	void	beSigned(const Bureaucrat& signer);

	const std::string&	getName() const;
	const bool&			getIsSigned() const;
	const int&			getSignReq() const;
	const int&			getExecReq() const;

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
std::ostream& operator<<(std::ostream &os, const Form& obj);
