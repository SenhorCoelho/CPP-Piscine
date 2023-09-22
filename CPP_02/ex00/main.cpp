#include "Fixed.hpp"


int main( void ) 
{
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	a.setRawBits(11);
	std::cout << a.getRawBits() << std::endl;
	b.setRawBits(3);
	std::cout << b.getRawBits() << std::endl;
	c = b;
	std::cout << c.getRawBits() << std::endl;


	return 0;
}

