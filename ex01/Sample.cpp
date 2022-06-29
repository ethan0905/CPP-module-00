//#include <iostream>
#include "Sample.hpp"


Sample::Sample( void ) {

	std::cout << "-Constructor called-" << std::endl;
	return;
}

Sample::~Sample( void ){

	std::cout << "-Destructor called-" << std::endl;
	return;
}

int	Sample::getFoo( void ) const{

	return this->_privateFoo;
}

void	Sample::setFoo( int v ) {

	this->_privateFoo = v;
	return;
}


