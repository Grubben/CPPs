#include <iostream>

#include "Contact.hpp"
#include "PhoneBook.hpp"

#include <iomanip>

int main(void)
{
	PhoneBook phonebook;
	std::string input;
	
	while (true)
	{
		std::cout << "Possible options: ADD, SEARCH or EXIT" << std::endl;
		std::cout << "> ";
		// input.clear();
		std::getline(std::cin, input);
		// if (input == "ADD" || input == "a")
		if (input == "ADD")
		{
			std::cout << "Adding!" << std::endl;
			phonebook.addContact();
			// input.clear();
		}
		// else if (input == "SEARCH" || input == "s")
		else if (input == "SEARCH")
		{
			std::cout << "Searching!" << std::endl;
            phonebook.show();
		}
		// else if (input == "EXIT" || input == "e")
		else if (input == "EXIT")
            break;
        // else
		// 	break;
	}
	
	
	return 0;
}