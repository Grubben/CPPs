#include "Harl.hpp"
#include <iostream>
int main(int argc, char *argv[])
{
	Harl	harl;
	std::string	debug = "DEBUG";
	std::string	info = "INFO";
	std::string	warning = "WARNING";
	std::string	error = "ERROR";
	int		lvl;

	if (argc < 2)
		return (0);
	if (!strcmp(argv[1], "DEBUG"))
		lvl = 0;
	if (!strcmp(argv[1], "INFO"))
		lvl = 1;
	if (!strcmp(argv[1], "WARNING"))
		lvl = 2;
	if (!strcmp(argv[1], "ERROR"))
		lvl = 3;

	switch (lvl)
	{
		case (0) :
			harl.complain("0");
			break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

	// harl.complain("0");
	// harl.complain("1");
	// harl.complain("2");
	// harl.complain("3");
	(void)argc;
	(void)argv;
}