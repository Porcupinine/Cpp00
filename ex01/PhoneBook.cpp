/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PhoneBook.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/11/02 09:57:07 by laura         #+#    #+#                 */
/*   Updated: 2023/11/02 09:57:07 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.h"

PhoneBook::PhoneBook() {
	std::cout<<"PhoneBook created\n";
}

PhoneBook::~PhoneBook() {
	std::cout<<"PhoneBook destroyed\n";
}

void PhoneBook::add_contact() {
	if (m_index == 7)
		m_index = 0;
	this->m_contacts[m_index].get_data();
	m_index++;
}

//ranged for

void print_pipe(std::string str) {
	str.resize(10, ' ');

}

void PhoneBook::print_contacts() {
	for(int x = 0; x < this->m_index; x++)
		this->m_contacts[x].show_data();
	for(int x = 0; x < this->m_index; x++)
	{

	}
}

void print_search_contacts() {

}
void PhoneBook::search_contact() {

}