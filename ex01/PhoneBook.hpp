#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include "Contact.hpp"


class	PhoneBook {

	public:

		PhoneBook ( void );
		~PhoneBook ( void );

		void	addContactFunction( void );
	private:

		Contact Contact[8];
};


#endif
