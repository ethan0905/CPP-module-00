#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>

class	Contact {

	public:
	
		Contact ( void );
		~Contact ( void );

//		void		displaySearchTab( void );
		void		printSearchLine( int i );
		void		printSearchedResult( void );
		void		newContact( std::string str, int i );

	private:

		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkestSecret;
};

typedef struct s_data {

	int i;
	char *str;
}	t_data;

#endif
