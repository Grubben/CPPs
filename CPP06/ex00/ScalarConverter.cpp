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

void	representChar(const int num)
{
	std::cout << "Char: ";
	if (num > std::numeric_limits<unsigned char>::max())
		std::cout << "impossible";
	else if (num < std::numeric_limits<unsigned char>::lowest())
		std::cout << "impossible";
	else if (std::isprint(num))
		std::cout << static_cast<unsigned char>(num);
	else
		std::cout << "Non displayable";
	std::cout << std::endl;
}

void	representInt(const std::string& literal)
{
	std::cout << "Int: ";

	if (isPseudoLit(literal))
		std::cout << "impossible";
	else
		std::cout << std::atoi(literal.c_str());
	std::cout << std::endl;

}

void	representFloat(const std::string& literal)
{
	std::cout << "Float: ";

	if (isPseudoLit(literal))
		std::cout << "impossible";
	else
		std::cout << std::atof(literal.c_str()) << "f";
	std::cout << std::endl;
	
}

void	representDouble(const std::string& literal)
{
	std::cout << "Double: ";

	if (isPseudoLit(literal))
		std::cout << "impossible";
	else
		std::cout << std::atol(literal.c_str());
	std::cout << std::endl;
	
}

void	ScalarConverter::convert(const std::string& literal)
{
	int	num = std::atoi(literal.c_str());
	std::cout << num << std::endl;
	
	representChar(num);
	
	representInt(literal);

	representFloat(literal);

	representDouble(literal);

}
