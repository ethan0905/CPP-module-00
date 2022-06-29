#include "PhoneBook.hpp"
#include "Contact.hpp"

Contact::Contact( void ){

	std::cout << "Constructor called" << std::endl;
	return ;
}

Contact::~Contact( void ){

	std::cout << "Destructor called" << std::endl;
	return ;
}
/*
void	Contact::displaySearchTab( void ) {	

	int i; 

	i = 0;
	while (i < 9)
	{
		std::cout << "| #" << i << "|" << _firstName;
		i++;
	}
	return ;
}*/

void	Contact::printSearchLine( int i ) {

	std::cout << "| #" << i << " | " << _firstName << " | " << _lastName << " | " << _nickName << std::endl;
	return ;
}

void	Contact::printSearchedResult( void ) {

	std::cout << "_firstName : " << Contact::_firstName << std::endl;
	std::cout << "_lastName : " << Contact::_lastName << std::endl;
	std::cout << "_nickName : " << Contact::_nickName << std::endl;
	std::cout << "_phoneNumber : " << Contact::_phoneNumber << std::endl;
	std::cout << "_darkestSecret : " << Contact::_darkestSecret << std::endl;
	return ;
}

void	Contact::newContact( std::string str, int i ) {

	if (i == 0)
		Contact::_firstName = str;
	else if (i == 1)
		Contact::_lastName = str;
	else if (i == 2)
		Contact::_nickName = str;
	else if (i == 3)
		Contact::_phoneNumber = str;
	else if (i == 4)
		Contact::_darkestSecret = str;
	return ;
}

