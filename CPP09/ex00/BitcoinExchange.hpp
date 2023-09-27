#pragma once
#include <iostream>
#include <vector>
#include <fstream>
#include <stdexcept>
#include <map>
#include <cstdlib>

class BitcoinExchange
{
private:
	std::map<std::string,double>	bexmap;

	std::pair<std::string,std::string>	inputDateValueCheck(const std::string& inputline);
public:
	BitcoinExchange(const std::string dbFilename);
	BitcoinExchange(const BitcoinExchange& copy);
	~BitcoinExchange(void);

	BitcoinExchange&	operator= (const BitcoinExchange& copy);
	double	getClosest(std::string inputkey);

	void	dateValueCalculator(const std::string ifname);
};
