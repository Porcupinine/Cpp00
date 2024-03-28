/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:56:44 by laura         #+#    #+#                 */
/*   Updated: 2023/11/02 09:56:44 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <algorithm>

namespace {
	bool check_isspace(std::string str) {
		auto it = str.begin();
		for (; it != str.end(); it++) {
			if (std::isspace(*it) == 0) {
				return true;
			}
		}
		std::cout << "empty input\n";
		return false;
	}

	bool check_phone(std::string number) {
		auto it = number.begin();
		for (; it != number.end(); it++) {
			if (std::isdigit(*it) == 0) {
				std::cout << "wrong input\n";
				return false;
			}
		}
		return true;
	}
}

Contact::Contact() {
//	std::cout << "Contact created!\n";
}

Contact::~Contact() {
//	std::cout << "Contact destroyed!\n";
}

bool Contact::get_data() {
	std::cout << "First name:";
	std::getline(std::cin, m_first_name);
	if (m_first_name.empty() || !check_isspace(m_first_name))
		return false;
	std::cout << "Last name:";
	std::getline(std::cin, m_last_name);
	if (m_last_name.empty() || !check_isspace(m_last_name))
		return false;
	std::cout << "Nickname:";
	std::getline(std::cin, m_nickname);
	if(m_nickname.empty() || !check_isspace(m_nickname))
		return false;
	std::cout << "Number:";
	std::getline(std::cin, m_phone);
	if (!check_phone(m_phone))
		return false;
	std::cout << "Darkest secret:";
	std::getline(std::cin, m_darkest_secret);
	if (m_darkest_secret.empty() || !check_isspace(m_darkest_secret))
		return false;
	return true;
}

void Contact::show_data() const {
	std::cout << "First name:" << m_first_name << "\n";
	std::cout << "Last name:" << m_last_name << "\n";
	std::cout << "Nickname:" << m_nickname << "\n";
	std::cout << "Number:" << m_phone << "\n";
	std::cout << "Darkest secret:" << m_darkest_secret << "\n";
}

std::string Contact::content(E_TYPE type) {
	switch (type) {
		case FIRST_NAME:
			return (m_first_name);
		case LAST_NAME:
			return (m_last_name);
		case NICKNAME:
			return (m_nickname);
		case PHONE:
			return (m_phone);
		case DARKEST_SECRET:
			return (m_darkest_secret);
	}
}
