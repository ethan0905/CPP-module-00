#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class	PhoneBook {

	public:

		PhoneBook ( void );
		~PhoneBook ( void );

		bool	isDigit( std::string input );

		void	addContactFunction( int contactNb );
		void	displaySearchTab( int contactNb );
	private:

		Contact contact[8];
};


#endif
