#include <iostream>
#include <string>

int	main(void)
{
	std::string brain = "HI THIS IS BRAIN";
	std::string	*stringPTR = &brain; // address of brain
	std::string &stringREF = brain; // reference of braing

	std::cout << &brain << std::endl;
	std::cout << stringPTR << std::endl;
	std::cout << &stringREF << std::endl; // address of reference

	std::cout << std::endl;

	std::cout << brain << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;

}
