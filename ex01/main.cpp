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

	while (1)
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

//TODO abort in case number is invalid
