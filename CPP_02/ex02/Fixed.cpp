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

//Const Int Constructot
Fixed::Fixed(const int nbr)
{
	this->_FPVal = nbr * (1 << this->_FracBits);
	return;
}

//Const Float Constructot
Fixed::Fixed(const float nbr)
{
	this->_FPVal = roundf(nbr * (1 << this->_FracBits));
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

float Fixed::toFloat(void) const
{
	return float(_FPVal) / float(1 << this->_FracBits);
}

int Fixed::toInt(void) const
{
	return roundf(_FPVal / (1 << this->_FracBits));
}

//Operator << overload
std::ostream &operator<<(std::ostream &o, Fixed const &src)
{
	o << src.toFloat();
	return o;
}

bool Fixed::operator>(Fixed const &rhs) const
{
	return (this->_FPVal > rhs.getRawBits());
}

bool Fixed::operator<(Fixed const &rhs) const
{
	return (this->_FPVal < rhs.getRawBits());
}

bool Fixed::operator>=(Fixed const &rhs) const
{
	return (this->_FPVal >= rhs.getRawBits());
}

bool Fixed::operator<=(Fixed const &rhs) const
{
	return (this->_FPVal <= rhs.getRawBits());
}

bool Fixed::operator==(Fixed const &rhs) const
{
	return (this->_FPVal == rhs.getRawBits());
}

bool Fixed::operator!=(Fixed const &rhs) const
{
	return (this->_FPVal != rhs.getRawBits());
}

Fixed Fixed::operator+(Fixed const &rhs) const
{
	return Fixed(this->toFloat() + rhs.toFloat());
}

Fixed Fixed::operator-(Fixed const &rhs) const
{
	return Fixed(this->toFloat() - rhs.toFloat());
}

Fixed Fixed::operator*(Fixed const &rhs) const
{
	return Fixed(this->toFloat() * rhs.toFloat());
}

Fixed Fixed::operator/(Fixed const &rhs) const
{
	return Fixed(this->toFloat() / rhs.toFloat());
}

Fixed &Fixed::operator++(void)
{
	this->_FPVal++;
	return *this;
}

Fixed &Fixed::operator--(void)
{
	this->_FPVal--;
	return *this;
}

Fixed Fixed::operator++(int)
{
	Fixed i = *this;
	this->_FPVal++;
	return i;
}

Fixed Fixed::operator--(int)
{
	Fixed i = *this;
	this->_FPVal--;
	return i;
}

Fixed &Fixed::min(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 < nbr2)
		return nbr1;
	return nbr2;
}

Fixed &Fixed::max(Fixed &nbr1, Fixed &nbr2)
{
	if (nbr1 > nbr2)
		return nbr1;
	return nbr2;
}

const Fixed &Fixed::min(Fixed const &nbr1, Fixed const &nbr2)
{
	if (nbr1 < nbr2)
		return nbr1;
	return nbr2;
}

const Fixed &Fixed::max(Fixed const &nbr1, Fixed const &nbr2)
{
	if (nbr1 > nbr2)
		return nbr1;
	return nbr2;
}