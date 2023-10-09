#pragma once
#include <iostream>
#include <stack>

// This shouldn't be an object!
class RPN
{
private:
	const std::string	expression;
	std::stack<int>		iks;

	void	stackAffect(const std::string& substring);
	int		splitNstack(const std::string input, const std::string delimiter);
public:
	RPN(const std::string& expression);
	RPN(const RPN& copy);
	~RPN(void);

	RPN&	operator= (const RPN& copy);

	int	calculate();
};
