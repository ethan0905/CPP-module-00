#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <stdlib.h>

PhoneBook::PhoneBook ( void ) {

	return ;
}

PhoneBook::~PhoneBook ( void ) {

	return ;
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
		if (input == "")
		{
			std::cerr << "Error: field can't be empty." << std::endl;
			count--;
		}
		Contact[contactNb % 8].newContact( input, count );
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
		Contact[i].printSearchLine(i);
	std::cout << "Enter a number to access a specific contact > ";

	std::getline(std::cin, input);
	number = atoi(input.c_str());

	if (number > 0 && number < 9 && number <= contactNb)
		Contact[number - 1].printSearchedResult();
	else
		std::cerr << "Error: invalid input." << std::endl;
	return ;
}
