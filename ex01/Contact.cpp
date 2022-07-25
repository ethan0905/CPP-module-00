#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <sstream>
#include <iomanip>

Contact::Contact( void ){

	return ;
}

Contact::~Contact( void ){

	return ;
}

void	Contact::printSearchLine( int i ) {

	int x;

	std::cout << "| #" << i + 1 << std::setw(11) << " | ";

	for (x = 0; x < 9 && x < (int)_firstName.size(); x++)
		std::cout << _firstName[x];
	if (x == 9 && (int)_firstName.size() > 9)
		std::cout << ".";
	else
		std::cout << std::setw(10 - x + 3);
	std::cout << " | ";

	for (x = 0; x < 9 && x < (int)_lastName.size(); x++)
		std::cout << _lastName[x];
	if (x == 9 && (int)_lastName.size() > 9)
		std::cout << ".";
	else
		std::cout << std::setw(10 - x + 3);
	std::cout << " | ";

	for (x = 0; x < 9 && x < (int)_nickName.size(); x++)
		std::cout << _nickName[x];
	if (x == 9 && (int)_nickName.size() > 9)
		std::cout << ".";
	else
		std::cout << std::setw(10 - x + 3);
	std::cout << " | " << std::endl;

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

