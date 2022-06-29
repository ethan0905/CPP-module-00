#ifndef SAMPLE_H
# define SAMPLE_H

#include <iostream>

class Sample {

	public:

		Sample ( void );
		~Sample ( void );

		int	getFoo( void ) const;
		void	setFoo( int v );

	private:
	
		int _privateFoo;
};

#endif
