/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amc <amc@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:26:01 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/09 15:24:40 by amc              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

#include <iostream>

class Contact
{
public:
	std::string firstn;
	std::string lastn;
	std::string	nickn;
	std::string pnum;

	Contact(void);
	~Contact(void);
	void	create(void);
	void	show();

private:
	std::string secret;
};

#endif
