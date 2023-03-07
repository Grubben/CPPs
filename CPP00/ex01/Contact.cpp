/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amc <amc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:29:14 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:26:23 by amc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact( void ) {
    std::cout << "Contact constructor called" << std::endl;
	firstn = "";
	lastn = "";
	nickn = "";
	pnum = "";
	secret = "";
}

Contact::~Contact( void ) {
    std::cout << "Contact destructor called" << std::endl;
}

static std::string	getin(const std::string prompt)
{
	std::string	input = "";

	do {
		std::cout << prompt;
		std::getline(std::cin, input);
		if (! std::cin)
		{
			input = "";	
		}
		std::cout << input << std::endl;
	}
	while (input == "");
	return input;
}

void	Contact::create(void)
{
	this->firstn = getin("First name> ");
	this->lastn = getin("Last name> ");
	this->nickn = getin("Nickname> ");
	this->pnum = getin("Phone Number> ");
	this->secret = getin("Darkest Secret> ");	
}

void	Contact::show(void)
{
	std::cout << firstn << std::endl;
	std::cout << lastn << std::endl;
	std::cout << nickn << std::endl;
	std::cout << pnum << std::endl;
	std::cout << secret << std::endl;
}

// int main(void)
// {
//     Contact hello;
    
// 	// std::cout << "hello" << std::endl;
	
// 	hello.create();
// 	hello.create();
//     return 0;
// }
