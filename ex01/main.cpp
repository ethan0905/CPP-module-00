/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:02 by esafar            #+#    #+#             */
/*   Updated: 2022/07/27 15:48:28 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>
#include <bits/stdc++.h> //for INT_MIN/MAX

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
				if (contactNb < INT_MAX)
				{
					instance.addContactFunction(contactNb);
					contactNb++;
				}
				else
					std::cerr << contactNb << "Error: reached limits of possible contacts storage." << std::endl;					
			}
			else if (line == "se")
				instance.displaySearchTab(contactNb);
			else if (line == "EXIT")
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
