#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		Bureaucrat	Gerald("gerald", -1);
		
	}
	catch (std::exception& e)
	{
		std::cout << e.what() << std::endl;
	}
	Bureaucrat	Jerry("jerry", 1);
	try
	{
		++Jerry;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	Bureaucrat	Marlen("marlen", 150);
	try
	{
		--Marlen;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	std::cout << Jerry << std::endl << Marlen << std::endl;

}