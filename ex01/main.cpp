/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/29 16:49:31 by laura         #+#    #+#                 */
/*   Updated: 2023/10/29 16:49:31 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iomanip>

int main (){
	PhoneBook phone_book;
	std::string line;

	std::cout<<"Welcome to the 80s and their unbelievable technology!\n";
	std::cout<<"We accept ADD, SEARCH and EXIT commands, and yeah, we are case sensitive\n";
	std::cout<<"to ADD a contact you must fill all the fields and phone numbers must only contain digits\n";
	std::cout<<"Have fun!\n";
	while (!std::cin.eof())
	{
		std::cout <<"Type your command: ";
		std::getline(std::cin, line);
		if(line == "EXIT")
			break;
		else if(line == "ADD")
			phone_book.add_contact();
		else if(line == "SEARCH")
			phone_book.search_contact();
		else
			std::cout<< "Unrecognized command, try \"ADD\", \"SEARCH\" or \"EXIT\"\n";
	}
}
