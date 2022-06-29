#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class	PhoneBook {

	public:

		PhoneBook ( void );
		~PhoneBook ( void );

		void	addContactFunction( int contactNb );
		void	displaySearchTab( int contactNb );
	private:

		Contact Contact[8];
};


#endif
