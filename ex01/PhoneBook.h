/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.h                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:57:26 by laura         #+#    #+#                 */
/*   Updated: 2023/11/02 09:57:26 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_PHONEBOOK_H
#define CPP00_PHONEBOOK_H

#include <iostream>
#include "Contact.h"

class PhoneBook{
	private:
		Contact		m_contacts[8];
		std::size_t	m_index{0};
	public:
		PhoneBook();
		~PhoneBook();
		void add_contact();
		void print_contacts();
		void search_contact();
};

#endif //CPP00_PHONEBOOK_H
