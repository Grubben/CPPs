#pragma once
#include <iostream>
#include <stack>

// This shouldn't be an object!
class RPN
{
private:
	const std::string	expression;
	std::stack<double>		iks;

	void	stackAffect(const std::string& substring);
	double		splitNstack(const std::string input, const std::string delimiter);
public:
	RPN(const std::string& expression);
	RPN(const RPN& copy);
	~RPN(void);

	RPN&	operator= (const RPN& copy);

	double	calculate();
};
