//#include <iostream>
#include "Sample.hpp"


Sample::Sample( void ) {

	std::cout << "-Constructor called-" << std::endl;

	this->publicFoo = 1;
	this->_privateFoo = 2;
	std::cout << "-------------------" << std::endl;
	std::cout << "publicFoo : " << this->publicFoo << std::endl;
	std::cout << "_privateFoo : " << this->_privateFoo << std::endl;

	this->publicBar();
	this->_privateBar();
	std::cout << "-------------------" << std::endl;
	return;
}

Sample::~Sample( void ){

	std::cout << "-Destructor called-" << std::endl;
	return;
}

void	Sample::publicBar( void ) const{

	std::cout << "Public member function called" << std::endl;
	return;
}

void	Sample::_privateBar( void ) const{

	std::cout << "_private member function called" << std::endl;
	return;
}


