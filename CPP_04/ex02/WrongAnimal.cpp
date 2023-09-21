#include "WrongAnimal.hpp"

//Constructor
WrongAnimal::WrongAnimal(void) : type("Base"), _sound("LOUD AND UNBEARABLE FEEDBACK NOISE")
{
	std::cout << "A new wrong animal was created." << std::endl;
	return;
}

//Copy constructor
WrongAnimal::WrongAnimal(WrongAnimal const &src) : type("Base"), _sound("LOUD AND UNBEARABLE FEEDBACK NOISE")
{
	std::cout << "A new wrong animal was created." << std::endl;
	*this = src;
	return;
}

//Destructor
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "A wrong animal has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
WrongAnimal &WrongAnimal::operator=(WrongAnimal const &src)
{
	this->type = src.type;
	this->_sound = src._sound;
	return *this;
}

//Getters
std::string WrongAnimal::getType(void) const
{
	return this->type;
}

//Member functions
void WrongAnimal::makeSound(void) const
{
	std::cout << _sound << std::endl;
	return;
}
