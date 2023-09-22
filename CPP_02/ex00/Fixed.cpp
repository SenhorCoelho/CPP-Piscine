#include "Fixed.hpp"

//Constructor
Fixed::Fixed(void) : _FPVal (0)
{
	return;
}

//Copy Constructor
Fixed::Fixed(Fixed const &src)
{
	*this = src;
	return;
}

//Destructor
Fixed::~Fixed(void)
{
	return;
}

//Copy Op. Overload
Fixed & Fixed::operator=(Fixed const &rhs)
{
	if (this != &rhs)
		this->_FPVal = rhs.getRawBits();

	return *this;
} 

int Fixed::getRawBits(void) const
{
	return _FPVal;
}

void Fixed::setRawBits(int const raw)
{
	_FPVal = raw;
	return;
}

