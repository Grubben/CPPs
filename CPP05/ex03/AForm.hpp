#pragma once
#include <iostream>

class Bureaucrat;

class AForm
{
private:
	const std::string	name;
	bool				isSigned;
	int					signReq;
	int					execReq;
public:
	AForm(void);
	AForm(const AForm& copy);
	AForm(const std::string name, bool isSigned, int signReq, int execReq);
	virtual ~AForm(void);

	AForm&	operator= (const AForm& copy);

	virtual void	beSigned(const Bureaucrat& signer);

	virtual void	action() const = 0;
	void			execute(const Bureaucrat& executor) const;

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
	class ExecutingUnsignedException : public std::exception {
		public:
			virtual const char* what() const _NOEXCEPT {
				return "Attempting to execute unsigned Form";
			}
	};

};
std::ostream& operator<<(std::ostream &os, const AForm& obj);
