/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esafar <esafar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 19:46:10 by esafar            #+#    #+#             */
/*   Updated: 2022/07/25 19:46:10 by esafar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
