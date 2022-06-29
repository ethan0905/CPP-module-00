#include "PhoneBook.hpp"

PhoneBook::PhoneBook ( void ) {

	return ;
}

PhoneBook::~PhoneBook ( void ) {

	return ;
}

void	PhoneBook::addContactFunction( void ) {

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

		count++;
	}
	return ;
}
