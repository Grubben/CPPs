#include "BitcoinExchange.hpp"

std::pair<std::string,double>    daterateCheck(std::string& entry)
{
    size_t	comma = entry.find(",");
    if (comma == std::string::npos)
        throw std::runtime_error("bad entry: " + entry);

    std::string date = entry.substr(0, comma);

    std::string year = date.substr(0, 4);

    std::string month = date.substr(5, 2);
    if (std::atof(month.c_str()) > 12)
        throw std::runtime_error("bad entry: " + entry);

    std::string day = date.substr(8, 2);
    if (std::atof(day.c_str()) > 31)
        throw std::runtime_error("bad entry: " + entry);


    double rate = std::atof(entry.substr(comma + 1).c_str());
    // if (rate < 0 || rate > 1000)
    //     throw std::runtime_error("bad entry: " + entry);

    return std::pair<std::string, double>(date, rate);
}

BitcoinExchange::BitcoinExchange(const std::string dbFilename)
{
	std::cout << "BitcoinExchange constructor called" << std::endl;

	std::ifstream entrylist(dbFilename.c_str());
    if (entrylist.is_open() == false)
        throw std::runtime_error("Couldn't open database file");

	std::string entry;
    std::getline(entrylist, entry); // skips the header: "date, exchange_rate"
	while (std::getline(entrylist, entry))
		bexmap.insert(daterateCheck(entry));
}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& copy)
{
	std::cout << "BitcoinExchange copy constructor called" << std::endl;
	*this = copy;
}

BitcoinExchange::~BitcoinExchange(void)
{
	std::cout << "BitcoinExchange destructor called" << std::endl;
}

BitcoinExchange&	BitcoinExchange::operator= (const BitcoinExchange& copy)
{
	std::cout << "BitcoinExchange assignment operator called" << std::endl;
	if (this != &copy)
	{
        bexmap = copy.bexmap;
    }
	return (*this);
}

void    BitcoinExchange::dateValueCalculator(const std::string ifname) const
{
	std::ifstream input(ifname.c_str());
    if (input.is_open() == false)
        throw std::runtime_error("Couldn't open input file");

	std::string line;
	while (std::getline(input, line))
    {}
}