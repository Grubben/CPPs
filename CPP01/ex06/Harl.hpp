#pragma once
#include <string>

// typedef void (Harl::*infunc)(void);

class Harl
{
private:
	static void					debug(void);
	static void					info(void);
	static void					warning(void);
	static void					error(void);
	void	(*funcs[4])(void);//	funcs[4];
	// infunc	funcs[4];


public:
	Harl(void);
	~Harl();

	void	complain(std::string level);
};
