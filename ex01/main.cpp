#include "Sample.hpp"

int	main(){

	Sample	instance;

	std::cout << "--------MAIN-------" << std::endl;
	instance.setFoo( 42 );
	std::cout << "_privateFoo : " << instance.getFoo() << std::endl;

	instance.setFoo( 21 );
	std::cout << "_privateFoo : " << instance.getFoo() << std::endl;
	std::cout << "------------------" << std::endl;

	return (0);
}
