/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amaria-d <amaria-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:43:47 by amaria-d          #+#    #+#             */
/*   Updated: 2023/03/28 17:05:05 by amaria-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>
#include <cstdlib>

PhoneBook::PhoneBook( void ) {
	std::cout << "PhoneBook constructor called" << std::endl;
}

PhoneBook::~PhoneBook( void ) {
	std::cout << "PhoneBook destructor called" << std::endl;
}

void	PhoneBook::addContact(void)
{
	static int index = 0;
	if (index == 9)
		index = 0;
	//TODO: possible memory leak if there's something in there already
	storage[index].create();
	index++;
}

static void	showfmt(std::string nm)
{
	if (nm.length() > 10)
	{
		nm.resize(9);
		std::cout << nm << "." << "|";
	}
	else
		std::cout << std::setw(10) << nm << "|";
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

void	PhoneBook::show(void)
{
	int	n;
	for (int i = 0; i < 9; i++)
	{
		if (storage[i].firstn == "")
			break;
		std::cout << std::setw(10) << i << "|";
		showfmt(storage[i].firstn);
		showfmt(storage[i].lastn);
		showfmt(storage[i].nickn);
		std::cout << std::endl;
	}
	n = std::atoi(getin("Index of Entry to Display> ").c_str());
	while (n < 0 || n > 8)
	{
		std::cout << "Wrong entry number given. Try again" << std::endl;
		n = std::atoi(getin("Index of Entry to Display> ").c_str());
	}
	storage[n].show();
}
