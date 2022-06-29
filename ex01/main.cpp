//#include "Sample.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <sstream>

int main(int ac, char **av){

	Contact instance;
	std::string line;
	(void)av;

	if (ac == 1)
	{
		while (1)
		{
			std::getline(std::cin, line);
			if (std::cin.eof())
			{
				std::cout << "^D" << std::endl;
				break ;
			}
			else if (line == "ADD")
				std::cout << "addContact function is loading [...]" << std::endl;
			else if (line == "SEARCH")
				std::cout << "searchContact function is loading [...]" << std::endl;
			else if (line == "EXIT")
				break ;
			std::cin.clear();
		}
	}
	else
		std::cout << "error: wrong number of arguments." << std::endl;
	return (0);
}



/*
int	main(){

	Sample	instance;

	std::cout << "--------MAIN-------" << std::endl;
	instance.setFoo( 42 );
	std::cout << "_privateFoo : " << instance.getFoo() << std::endl;
	instance.setFoo( -21 );
	std::cout << "_privateFoo : " << instance.getFoo() << std::endl;
	std::cout << "------------------" << std::endl;

	return (0);
}*/
