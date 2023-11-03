/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.h                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:56:56 by laura         #+#    #+#                 */
/*   Updated: 2023/11/02 09:56:56 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CPP00_CONTACT_H
#define CPP00_CONTACT_H

#include <string>

class Contact {
	private:
		std::string	m_first_name;
		std::string	m_last_name;
		std::string m_nickname;
		std::string	m_phone;
		std::string m_darkest_secret;

	public:
		Contact();
		~Contact();
		void get_data();
		void show_data() const;
};

#endif //CPP00_CONTACT_H
