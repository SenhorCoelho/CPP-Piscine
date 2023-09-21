#include "Dog.hpp"

//Constructor
Dog::Dog(void) : Animal()
{
	type = "Dog";
	_sound = "Bark!";
	_brain = new Brain();
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
	delete _brain;
	return;
}

//Assignment Operator Overload
Dog &Dog::operator=(Dog const &src)
{
	this->type = src.type;
	this->_sound = src._sound;
	delete this->_brain;
	this->_brain = new Brain(*(src._brain));
	return *this;
}

//Member functions
void Dog::makeSound(void) const
{
	std::cout << _sound << std::endl;
	return;
}

void Dog::assignBrain(Brain const &src)
{
	delete this->_brain;
	this->_brain = new Brain(src);
	return;
}

void Dog::thinkAloud(void)
{
	this->_brain->showIdeas();
	return;
}
