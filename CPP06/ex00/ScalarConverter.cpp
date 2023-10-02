#include "ScalarConverter.hpp"
#include <cmath>
#include <cstdlib>
#include <iomanip>

ScalarConverter::ScalarConverter(void)
{
	std::cout << "ScalarConverter constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter& copy)
{
	std::cout << "ScalarConverter copy constructor called" << std::endl;
	*this = copy;
}

ScalarConverter::~ScalarConverter(void)
{
	std::cout << "ScalarConverter destructor called" << std::endl;
}

ScalarConverter&	ScalarConverter::operator= (const ScalarConverter& copy)
{
	std::cout << "ScalarConverter assignment operator called" << std::endl;
	if (this != &copy)
	{}
	return (*this);
}

bool	isPseudoLit(const std::string& literal)
{
	return (
		literal == "-inff" || literal == "+inff" || literal == "nanf"
		|| literal == "-inf" || literal == "+inf" || literal == "nan"
	);
}

void	representChar(const std::string& literal)
{
	std::cout << "Char: ";
	try
	{
		unsigned char	num = static_cast<unsigned char>(std::atoi(literal.c_str()));
		if (std::isprint(num))
		{
			std::cout << "'" << (num) << "'";
		}
		else
			std::cout << "Non displayable";
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		std::cout << "impossible";
		if (literal.length() != 1)
			std::cout << "impossible";
		else if (literal >= "a" || literal <= "Z")
			std::cout << literal;
	}
	std::cout << std::endl;
}

void	representInt(const std::string& literal)
{
	std::cout << "Int: ";

	try
	{
		if (isPseudoLit(literal))
			throw std::exception();
		std::cout << static_cast<int>(std::atoi(literal.c_str()));
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void	representFloat(const std::string& literal)
{
	std::cout << "Float: ";

	try
	{
		std::cout << std::fixed << std::setprecision(1) << std::atof(literal.c_str()) << "f";
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void	representDouble(const std::string& literal)
{
	std::cout << "Double: ";

	try
	{
		double num = std::strtod(literal.c_str(), NULL);
		std::cout << std::fixed << std::setprecision(1) << num;
	}
	catch(const std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		std::cout << "impossible";
	}
	std::cout << std::endl;
}

void	ScalarConverter::convert(const std::string& literal)
{
	representChar(literal);
	representInt(literal);
	representFloat(literal);
	representDouble(literal);
}
