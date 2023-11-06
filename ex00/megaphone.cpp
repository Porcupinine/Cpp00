/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: laura <laura@student.codam.nl>               +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/25 14:00:57 by laura         #+#    #+#                 */
/*   Updated: 2023/10/25 14:00:57 by laura         ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//if megaphone has no arg, prints loud noise, otherwise, uppercase everything
//and print
//--------------given exemple------------------
//$>./megaphone "shhhhh... I think the students are asleep..."
//SHHHHH... I THINK THE STUDENTS ARE ASLEEP...
//		$>./megaphone Damnit " ! " "Sorry students, I thought this thing was off."
//DAMNIT ! SORRY STUDENTS, I THOUGHT THIS THING WAS OFF.
//$>./megaphone
//		* LOUD AND UNBEARABLE FEEDBACK NOISE *
//$>

#include "megaphone.hpp"
#include <iostream>
#include <cstring>

int main (int argc, char **argv){
	if (argc == 1)
		std::cout <<"* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else {
		for (int count = 1; count < argc; count++) {
			for (int countStr = 0; countStr < std::strlen(argv[count]); countStr++)
				putchar(toupper(argv[count][countStr]));
			putchar(' ');
		}
	}
}
