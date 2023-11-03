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

#include "Contact.h"
#include <iostream>

Contact::Contact() {
	std::cout << "Contact created!\n";
}

Contact::~Contact() {
	std::cout << "Contact destroyed!\n";
}

void Contact::get_data() {
	std::cout << "First name:";
	std::getline(std::cin, this->m_first_name);
	std::cout << "Last name:";
	std::getline(std::cin, this->m_last_name);
	std::cout << "Nickname:";
	std::getline(std::cin, this->m_nickname);
	std::cout << "Number:";
	std::getline(std::cin, this->m_phone);
	std::cout << "Darkest secret:";
	std::getline(std::cin, this->m_darkest_secret);
}

void Contact::show_data() const {
	std::cout << "First name:" << this->m_first_name << "\n";
	std::cout << "Last name:" << this->m_last_name << "\n";
	std::cout << "Nickname:" << this->m_nickname << "\n";
	std::cout << "Number:" << this->m_phone << "\n";
	std::cout << "Darkest secret:" << this->m_darkest_secret << "\n";
}