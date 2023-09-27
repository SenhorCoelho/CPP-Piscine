#include "Dog.hpp"

//Constructor
Dog::Dog(void)
{
	type = "Dog";
	_brain = new Brain();
	std::cout << "A new Dog was created." << std::endl;
	return;
}

//Copy constructor
Dog::Dog(Dog const &src) : Animal(src)
{
	_brain = new Brain();
	*this = src;
	std::cout << "A new Dog was created." << std::endl;
	return;
}

//Destructor
Dog::~Dog(void)
{
	delete _brain;
	std::cout << "A Dog has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
Dog &Dog::operator=(Dog const &src)
{
	this->type = src.type;
	return *this;
}

Brain *Dog::getBrain(void) const
{
	return this->_brain;
}

//Member functions
void Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
	return;
}
