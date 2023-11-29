#include "RPN.hpp"
#include <stdexcept>
#include <cstdlib>
#include <limits>
long	sToLong(const std::string& st)
{
	return std::atol(st.c_str());
}

void	RPN::stackAffect(const std::string& subst)
{
	if (!(subst == "+" || subst == "-"
			|| subst == "*" || subst == "/"))
	{
		const double itmp = sToLong(subst);
		iks.push(itmp);
		return ;
	}
	if (iks.size() < 2)
		throw std::runtime_error("not enough values for operation");

	const double b = iks.top();
	iks.pop();
	const double a = iks.top();
	iks.pop();

	if (subst == "+")
		iks.push(a + b);
	else if (subst == "-")
		iks.push(a - b);
	else if (subst == "*")
		iks.push(a * b);
	else if (subst == "/")
	{
		if (b == 0)
			iks.push(std::numeric_limits<double>::infinity());
		else
		iks.push(a / b);
	}
	else
		throw std::runtime_error("unreachable");
}


double RPN::splitNstack(const std::string input, const std::string delimiter)
{
    size_t start = 0;
    size_t end = input.find(delimiter);

    while (end != std::string::npos)
    {
		const std::string stmp = input.substr(start, end - start);
		if (stmp.length() != 1)
			throw std::runtime_error("value between spaces too long");
		stackAffect(stmp);
        // if (stmp != "")
        // {
            // iks.push(stmp);
        // }
        start = end + delimiter.length();
        while (start < input.length() && input[start] == ' ')
        {
            start++;
        }

        end = input.find(delimiter, start);
    }
    if (start < input.length())
    {
        // iks.push(input.substr(start));
		stackAffect(input.substr(start));
    }
	if (iks.size() != 1)
		throw std::runtime_error("too many or too little values given");
    return iks.top();
}

RPN::RPN(const std::string& expression)
	: expression(expression)
{
	// std::cout << "RPN constructor called" << std::endl;
}

RPN::RPN(const RPN& copy)
	: expression(copy.expression)
{
	std::cout << "RPN copy constructor called" << std::endl;
	*this = copy;
}

RPN::~RPN(void)
{
	// std::cout << "RPN destructor called" << std::endl;
}

RPN&	RPN::operator= (const RPN& copy)
{
	std::cout << "RPN assignment operator called" << std::endl;
	if (this != &copy)
	{
		iks = copy.iks;
	}
	return (*this);
}

double	RPN::calculate()
{
	// std::cout << expression << std::endl;
	std::cout << splitNstack(expression, " ") << std::endl;
	return 1;
}