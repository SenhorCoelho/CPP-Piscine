#include "Dog.hpp"

//Constructor
Dog::Dog(void) : Animal()
{
	type = "Dog";
	_sound = "Bark!";
	std::cout << "A new Dog was created." << std::endl;
	return;
}

//Copy constructor
Dog::Dog(Dog const &src) : Animal(src)
{
	*this = src;
	std::cout << "A new Dog was created." << std::endl;
	return;
}

//Destructor
Dog::~Dog(void)
{
	std::cout << "A Dog has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
Dog &Dog::operator=(Dog const &src)
{
	this->type = src.type;
	this->_sound = src._sound;
	return *this;
}

//Member functions
void Dog::makeSound(void) const
{
	std::cout << _sound << std::endl;
	return;
}
