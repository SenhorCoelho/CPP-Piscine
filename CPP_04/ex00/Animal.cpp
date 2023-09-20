#include "Animal.hpp"

//Constructor
Animal::Animal(void) : type("Base"), _sound("LOUD AND UNBEARABLE FEEDBACK NOISE")
{
	std::cout << "A new animal was created." << std::endl;
	return;
}

//Copy constructor
Animal::Animal(Animal const &src) : type("Base"), _sound("LOUD AND UNBEARABLE FEEDBACK NOISE")
{
	std::cout << "A new animal was created." << std::endl;
	*this = src;
	return;
}

//Destructor
Animal::~Animal(void)
{
	std::cout << "An animal has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
Animal &Animal::operator=(Animal const &src)
{
	this->type = src.type;
	this->_sound = src._sound;
	return *this;
}

//Getters
std::string Animal::getType(void) const
{
	return this->type;
}

//Member functions
void Animal::makeSound(void) const
{
	std::cout << _sound << std::endl;
	return;
}
