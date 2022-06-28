#include <iostream>
#include "Sample.hpp"


Sample::Sample( char p1, int p2, float p3 ) : a1(p1), a2(p2), a3(p3) {

	std::cout << "Constructor called" << std::endl;

	std::cout << "a1 : " << this->a1 << std::endl;
	std::cout << "a2 : " << this->a2 << std::endl;
	std::cout << "a3 : " << this->a3 << std::endl;

	//this->bar();

	return;
}

Sample::~Sample( void ){

	std::cout << "Destructor called" << std::endl;
	return;
}

void	Sample::bar( void ){

	std::cout << "Member function called" << std::endl;
	return;
}
