#include <iostream>

void	printcapital(char **strarr)
{
	for (unsigned int j = 0; strarr[j] != NULL; j++)
	{
		for (unsigned int i = 0; strarr[j][i] != '\0'; i++)
		{
			std::cout << static_cast<unsigned char>(std::toupper(static_cast<unsigned char>(strarr[j][i])));
		}
	}
}

int	main(int argc, char *argv[])
{
	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		printcapital(argv + 1);
		std::cout << std::endl;
	}
	return (0);
}