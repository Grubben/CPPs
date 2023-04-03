#include "Harl.hpp"
#include <iostream>
#include <sstream>

std::string	inToStr(int value)
{
	std::ostringstream ss;
	ss << value;
	return ss.str();
	// return static_cast<std::ostringstream*>( &(std::ostringstream() << lvl) )->str();
}

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

	if (argv[1] == debug)
		lvl = 0;
	else if (argv[1] == info)
		lvl = 1;
	else if (argv[1] == warning)
		lvl = 2;
	else if (argv[1] == error)
		lvl = 3;
	else
		lvl = -1;

	switch (lvl)
	{
	case 0:
		harl.complain(inToStr(lvl));
		lvl++;
	case 1:
		harl.complain(inToStr(lvl));
		lvl++;
	case 2:
		harl.complain(inToStr(lvl));
		lvl++;
	case 3:
		harl.complain(inToStr(lvl));
		lvl++;
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}

}