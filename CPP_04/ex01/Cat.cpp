#include "Cat.hpp"

//Constructor
Cat::Cat(void) : Animal()
{
	type = "Cat";
	_sound = "Meow!";
	_brain = new Brain();
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
	delete _brain;
	return;
}

//Assignment Operator Overload
Cat &Cat::operator=(Cat const &src)
{
	this->type = src.type;
	this->_sound = src._sound;
	return *this;
}

//Member functions
void Cat::makeSound(void) const
{
	std::cout << _sound << std::endl;
	return;
}

void Cat::assignBrain(Brain const &src)
{
	delete this->_brain;
	this->_brain = new Brain(src);
	return;
}

void Cat::thinkAloud(void)
{
	this->_brain->showIdeas();
	return;
}