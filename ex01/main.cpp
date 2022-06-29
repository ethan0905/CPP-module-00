#include "Sample.hpp"

int	main(){

	Sample	instance;

	instance.publicFoo = 42;
	std::cout << "--------MAIN-------" << std::endl;
	std::cout << "publicFoo : " << instance.publicFoo << std::endl;

//	instance._privateFoo = 42;
//	std::cout << "_privateFoo : " << instance._privateFoo << std::endl;

	instance.publicBar();
	std::cout << "------------------" << std::endl;

	return (0);
}
