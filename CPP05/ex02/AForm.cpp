#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::~AForm(void)
{
	std::cout << "AForm Destructor called" << std::endl;
}

AForm::AForm(void)
{
	std::cout << "Constructor called" << std::endl;
}

AForm::AForm(const AForm& copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}
AForm::AForm(const std::string name, bool isSigned, int signReq, int execReq)
	: name(name)
	, isSigned(isSigned)
	, signReq(signReq)
	, execReq(execReq)
{
	std::cout << "Constructor called" << std::endl;
}
AForm&	AForm::operator= (const AForm& copy)
{
	std::cout << "Assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

void	AForm::beSigned(const Bureaucrat& signer)
{
	if (signer.getGrade() <= this->signReq)
		isSigned = 1;
	else
		throw AForm::GradeTooLowException();
}

void	AForm::execute(const Bureaucrat& executor) const
{
	if (!this->getIsSigned())
		throw ExecutingUnsignedException();
	if (executor.getGrade() > this->getExecReq())
		throw GradeTooLowException();
	this->action();
}

const	std::string&	AForm::getName() const
{
	return this->name;
}

const	bool&			AForm::getIsSigned() const
{
	return this->isSigned;
}
const	int&			AForm::getSignReq() const
{
	return this->signReq;
}
const	int&			AForm::getExecReq() const
{
	return this->execReq;
}

std::ostream& operator<<(std::ostream &os, const AForm& obj)
{
	os << obj.getName() <<  std::endl;
	os << "is signed: " << obj.getIsSigned() << std::endl;
	os << "Sign requirement " << obj.getSignReq() << std::endl;
	os << "Execution requirement " << obj.getSignReq() << std::endl;
	return os;
}