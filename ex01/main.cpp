/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:46:02 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(int ac, char **av){

	std::string line;
	PhoneBook	instance;
	(void)av;

	if (ac == 1)
	{
		int contactNb;

		contactNb = 0;
		while (1)
		{
			std::cout << ">>> ";
			std::getline(std::cin, line);
			if (line == "add")
			{
				instance.addContactFunction(contactNb);
				contactNb++;
			}
			else if (line == "search")
				instance.displaySearchTab(contactNb);
			else if (line == "exit")
				break ;
			else
				std::cerr << "Error: bad input." << std::endl;
			if (std::cin.eof())
			{
				std::cout << "^D" << std::endl;
				break ;
			}
			std::cin.clear();
		}
	}
	else
		std::cerr << "Error: wrong number of arguments." << std::endl;
	return (0);
}
