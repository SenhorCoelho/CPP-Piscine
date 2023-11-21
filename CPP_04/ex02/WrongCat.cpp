#include "WrongCat.hpp"

//Constructor
WrongCat::WrongCat(void)
{
	type = "WrongCat";
	std::cout << "A new Wrong Cat was created." << std::endl;
	return;
}

//Copy constructor
WrongCat::WrongCat(WrongCat const &src) : WrongAnimal(src)
{
	*this = src;
	std::cout << "A new Wrong Cat was created." << std::endl;
	return;
}

//Destructor
WrongCat::~WrongCat(void)
{
	std::cout << "A Wrong Cat has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
WrongCat &WrongCat::operator=(WrongCat const &src)
{
	this->type = src.type;
	return *this;
}

//Member functions
void WrongCat::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
	return;
}

