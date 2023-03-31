/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: endarc <endarc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/31 15:43:18 by amaria-d          #+#    #+#             */
/*   Updated: 2023/02/07 12:40:28 by endarc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

# include "Contact.hpp"

class PhoneBook
{
private:
	int		index;
	Contact storage[8];

public:
	PhoneBook(void);
	~PhoneBook(void);
	void	addContact(void);
	void	show(void);

};

#endif
