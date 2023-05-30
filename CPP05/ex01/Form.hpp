#pragma once
#include <iostream>

class Form
{
private:
	std::string name;
	bool	isSigned;
	int			signReq;
	int			execReq;	
public:
	~Form(void);
	Form(void);
	Form(const Form& copy);

	Form&	operator= (const Form& copy);

	const	std::string&	getName() const;
	const	bool&			getIsSigned() const;
	const	int&			getSignReq() const;
	const	int&			getExecReq() const;
};

