#include <iostream>
#include <fstream>
#include <string>

std::string	rep(const std::string line, const std::string s1, const std::string s2)
{
	std::size_t		idx;

	idx = line.find(s1);
	if (idx != std::string::npos)
	{
		return (
			line.substr(0, idx) +
			s2 + rep(line.substr(idx + s1.length()), s1, s2)
		);
	}
	return (line);
}

int	fileitreplace(std::ifstream &ifile, std::ofstream &ofile, const std::string s1, const std::string s2)
{
	std::string		line;

	while (getline(ifile, line))
	{
		std::cout << line << std::endl;
		std::cout << rep(line, s1, s2) << std::endl;
		ofile << rep(line, s1, s2) << std::endl;
	}
	(void)ofile;
	return (1);
}


int main(int argc, char *argv[])
{
	if (argc != 4)
	{
		std::cout << "Wrong n of arguments" << std::endl;
		return 0;
	}
	std::ifstream	ifile(argv[1]);
	std::ofstream	ofile;

	std::string	tmp = argv[1];
	tmp.append(".replace");
	ofile.open(tmp.c_str(), std::ios::out | std::ios::trunc);
	if (ifile.is_open() && ofile.is_open())
		fileitreplace(ifile, ofile, argv[2], argv[3]);


	ifile.close();
	ofile.close();

	return (0);
}