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
			else if (line == "add")
				std::cout << "addContact function is loading [...]" << std::endl;
			else if (line == "search")
				std::cout << "searchContact function is loading [...]" << std::endl;
			else if (line == "exit")
				break ;
			else
				std::cerr << "Error: bad input." << std::endl;
			std::cin.clear();
		}
	}
	else
		std::cerr << "Error: wrong number of arguments." << std::endl;
	return (0);
}
