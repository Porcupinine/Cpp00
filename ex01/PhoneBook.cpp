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

#include "PhoneBook.hpp"
#include <string>
#include <sstream>

namespace {
	std::string print_size(std::string str) {
		if(str.size() > 10) {
			str.resize(9);
			str.resize(10, '.');
		}
		else
			str.resize(10, ' ');
		return (str);
	}

	void print_right(const std::string& str) {
		std::cout<< std::right;
		std::cout<< print_size(str);
	}
}

PhoneBook::PhoneBook() {
//	std::cout<<"PhoneBook created\n";
}

PhoneBook::~PhoneBook() {
//	std::cout<<"PhoneBook destroyed\n";
}

void PhoneBook::add_contact() {
	Contact tmp;

	if (m_index == 8)
		m_index = 0;
	if(!tmp.get_data())
		return;
	m_contacts[m_index] = tmp;
	m_index++;
	if (m_list_size < 8)
		m_list_size++;
}

void PhoneBook::print_contacts() {
	for(size_t x = 0; x < m_list_size; x++)
	{
		print_right(std::to_string(x));
		std::cout<<"|";
		print_right (m_contacts[x].content(FIRST_NAME));
		std::cout<<"|";
		print_right (m_contacts[x].content(LAST_NAME));
		std::cout<<"|";
		print_right (m_contacts[x].content(NICKNAME));
		std::cout <<"\n";
	}
}

void PhoneBook::search_contact() {
	std::string line;
	size_t index;

	print_contacts();
	std::cout<<"Please select an index:";
	std::getline(std::cin, line);
	try {
		index = std::stoul(line);
	}
	catch (const std::exception &ex) {
		std::cout << "error: " << ex.what() << "\n";
		return;
	}
	if (index >= m_list_size) {
		std::cout << "invalid index\n";
		return;
	}
	m_contacts[index].show_data();
}
