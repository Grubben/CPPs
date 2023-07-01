#include "ScalarConverter.hpp"
#include <limits>

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
	// Represent char literals
	try
	{
		double	num = std::stod(literal);
		std::cout << num << std::endl;
		// if (num > std::numeric_limits<unsigned char>::max())
		// 	std::cout << "impossible";
		// else if (num < std::numeric_limits<unsigned char>::lowest())
		// 	std::cout << "impossible";
		if (std::isprint(num))
		{
			std::cout << "'" << static_cast<unsigned char>(num) << "'";
		}
		else
			std::cout << "Non displayable";
		return;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		std::cout << "impossible";
	}
	if (literal.length() != 1)
		std::cout << "impossible";
	else if (literal >= "a" || literal <= "Z")
		std::cout << literal;

	std::cout << std::endl;
}

void	representInt(const std::string& literal)
{
	std::cout << "Int: ";

	if (isPseudoLit(literal))
		std::cout << "impossible";
	else
		std::cout << static_cast<int>(std::stod(literal));
	std::cout << std::endl;

}

void	representFloat(const std::string& literal)
{
	std::cout << "Float: ";

	// if (isPseudoLit(literal))
	// 	std::cout << "impossible";
	// else
		float num = std::stof(literal);
		std::cout << num << "f";
	std::cout << std::endl;
	
}

void	representDouble(const std::string& literal)
{
	std::cout << "Double: ";

	if (isPseudoLit(literal))
		std::cout << literal;
	else
	{
		double num = std::stod(literal);
		std::cout << num;

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
