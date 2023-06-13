#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::~Form(void)
{
	std::cout << "Destructor called" << std::endl;
}

Form::Form(void)
{
	std::cout << "Constructor called" << std::endl;
}

Form::Form(const Form& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
Form::Form(const std::string name, bool isSigned, int signReq, int execReq)
	: name(name)
	, isSigned(isSigned)
	, signReq(signReq)
	, execReq(execReq)
{
	std::cout << "Constructor called" << std::endl;
}
Form&	Form::operator= (const Form& copy)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

void	Form::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() <= this->signReq)
		isSigned = 1;
	else
		throw Form::GradeTooLowException();
}

const	std::string&	Form::getName() const
{
	return this->name;
}

const	bool&			Form::getIsSigned() const
{
	return this->isSigned;
}
const	int&			Form::getSignReq() const
{
	return this->signReq;
}
const	int&			Form::getExecReq() const
{
	return this->execReq;
}

std::ostream& operator<<(std::ostream &os, const Form& obj)
{
	os << obj.getName() <<  std::endl;
	os << "is signed: " << obj.getIsSigned() << std::endl;
	os << "Sign requirement " << obj.getSignReq() << std::endl;
	os << "Execution requirement " << obj.getSignReq() << std::endl;
	return os;
}