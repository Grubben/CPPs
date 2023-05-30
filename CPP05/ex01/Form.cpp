#include "Form.hpp"

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

Form&	Form::operator= (const Form& copy)
{
	std::cout << "Assignation operator called" << std::endl;
	return (*this);
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