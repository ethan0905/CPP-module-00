/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:07 by esafar            #+#    #+#             */
/*   Updated: 2022/07/27 15:00:02 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook ( void ) {

	return ;
}

PhoneBook::~PhoneBook ( void ) {

	return ;
}

bool	PhoneBook::isDigit ( std::string input) {

	for (int i = 0; i < (int)input.size(); i++)
	{
		if (input[i] < '0' || input[i] > '9')
			return true;
	}
	return false;
}

void	PhoneBook::addContactFunction( int contactNb ) {

	int count = 0;
	std::string	input;

	while (count < 5)
	{
		if (count == 0)
			std::cout << "firstName : ";
		else if (count == 1)
			std::cout << "lastName : ";
		else if (count == 2)
			std::cout << "nickName : ";
		else if (count == 3)
			std::cout << "phoneNumber : ";
		else if (count == 4)
			std::cout << "darkestSecret : ";
		std::getline(std::cin, input);
		if (std::cin.eof())
		{
			std::cout << "^D" << std::endl;
			return ;
		}
		if (input == "")
		{
			std::cerr << "Error: field can't be empty." << std::endl;
			count--;
		}
		if (count == 3 && isDigit(input))
		{
			std::cerr << "Error: enter a valid number." << std::endl;
			count--;
		}
		contact[contactNb % 8].newContact( input, count );
		std::cin.clear();
		count++;
	}
	return ;
}

void	PhoneBook::displaySearchTab( int contactNb ) {

	int i;
	int	number;
	std::string input;

	i = 0;
	if (contactNb == 0)
	{
		std::cerr << "There is no contact inside your repository. Add one by using the command ADD." << std::endl;
		return ;
	}
	for(int i = 0; i <= 7 && i < contactNb; i++)
		contact[i].printSearchLine(i);
	std::cout << "Enter a number to access a specific contact > ";

	std::getline(std::cin, input);
	if (std::cin.eof())
	{
		std::cout << "^D" << std::endl;
		return ;
	}
	number = atoi(input.c_str());
	std::cin.clear();

	if (number > 0 && number < 9 && number <= contactNb)
		contact[number - 1].printSearchedResult();
	else
		std::cerr << "Error: invalid input." << std::endl;
	return ;
}
