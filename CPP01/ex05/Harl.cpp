#include "Harl.hpp"
#include <iostream>
#include <stdlib.h>
void	Harl::debug(void)
{
	std::cout << "I love having extra bacon for my ";
	std::cout << "7XL-double-cheese-triple-pickle-special-ketchup burger. ";
	std::cout << "I really do!" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. ";
	std::cout << "You didn’t put enough bacon in my burger! ";
	std::cout << "If you did, I wouldn’t be asking for more!" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. ";
	std::cout << "I’ve been coming for years whereas you started";
	std::cout << "working here since last month." << std::endl;
}
void	Harl::error(void)
{
	std::cout << "This is unacceptable! I want to speak to the manager now.";
	std::cout << std::endl;
}

Harl::Harl(void)
{
	funcs[0] = &Harl::debug;
	funcs[1] = &Harl::info;
	funcs[2] = &Harl::warning;
	funcs[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::complain(std::string level)
{
	int	t;
	
	t = std::atoi(level.c_str());
	if (t >=0 && t <=3)
		funcs[t]();
}