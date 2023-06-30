#pragma once
#include <iostream>

class ScalarConverter
{
private:
		/*private members*/
public:
	ScalarConverter(void);
	ScalarConverter(const ScalarConverter& copy);
	~ScalarConverter(void);

	ScalarConverter&	operator= (const ScalarConverter& copy);

	static void	convert(const std::string& literal);
};
