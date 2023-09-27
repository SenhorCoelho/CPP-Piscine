#include "Cat.hpp"

//Constructor
Cat::Cat(void)
{
	type = "Cat";
	std::cout << "A new Cat was created." << std::endl;
	return;
}

//Copy constructor
Cat::Cat(Cat const &src) : Animal(src)
{
	*this = src;
	std::cout << "A new Cat was created." << std::endl;
	return;
}

//Destructor
Cat::~Cat(void)
{
	std::cout << "A Cat has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
Cat &Cat::operator=(Cat const &src)
{
	this->type = src.type;
	return *this;
}

//Member functions
void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return;
}
