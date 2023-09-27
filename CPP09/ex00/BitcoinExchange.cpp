#include "BitcoinExchange.hpp"

std::pair<std::string,double>    daterateCheck(std::string& entry)
{
    size_t	comma = entry.find(",");
    if (comma == std::string::npos)
        throw std::runtime_error("No comma: " + entry);

    std::string date = entry.substr(0, comma);

    std::string year = date.substr(0, 4);

    std::string month = date.substr(5, 2);
    if (std::atof(month.c_str()) > 12)
        throw std::runtime_error("bad entry: " + entry);

    std::string day = date.substr(8, 2);
    if (std::atof(day.c_str()) > 31)
        throw std::runtime_error("bad entry: " + entry);


    double rate = std::atof(entry.substr(comma + 1).c_str());

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

std::pair<std::string,std::string>    BitcoinExchange::inputDateValueCheck(const std::string& inputline)
{
    std::size_t del = inputline.find(" | ");
    if (del == std::string::npos)
        throw std::runtime_error("Wrong format for input line: " + inputline);
    
    std::string date = inputline.substr(0, del);
    std::string year = date.substr(0, 4);

    std::string month = date.substr(5, 2);
    if (std::atof(month.c_str()) > 12)
        throw std::runtime_error("bad date: " + inputline);

    std::string day = date.substr(8, 2);
    if (std::atof(day.c_str()) > 31)
        throw std::runtime_error("bad date: " + inputline);

    double val = std::atof(inputline.substr(del + 3).c_str());
    if (val < 0 || val > 1000)
        throw std::runtime_error("bad value: " + inputline);

    return std::pair<std::string,std::string>(date, inputline.substr(del + 3));    
}

double BitcoinExchange::getClosest(std::string inputkey)
{
    std::map<std::string,double>::iterator search = bexmap.upper_bound(inputkey);
    if (search == bexmap.begin())
        return search->second;
    else
        return std::prev(search)->second; // since it's NOT lower_bound the previous will be
                                            // either a match or the closest before it
}

void    BitcoinExchange::dateValueCalculator(const std::string ifname)
{
	std::ifstream input(ifname.c_str());
    if (input.is_open() == false)
        throw std::runtime_error("Couldn't open input file");

	std::string line;
    std::getline(input, line); // remove header: "date | value"
	while (std::getline(input, line))
    {
        try
        {
            std::pair<std::string,std::string> dateval = inputDateValueCheck(line);
            std::cout << dateval.first + " => " + dateval.second + " = ";
            double val = std::atof(dateval.second.c_str());
            std::cout << val * getClosest(dateval.first) << std::endl;


        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
        
    }
}