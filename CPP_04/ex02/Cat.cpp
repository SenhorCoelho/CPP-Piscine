#include "Cat.hpp"

//Constructor
Cat::Cat(void)
{
	type = "Cat";
	_brain = new Brain();
	std::cout << "A new Cat was created." << std::endl;
	return;
}

//Copy constructor
Cat::Cat(Cat const &src) : Animal(src)
{
	_brain = new Brain();
	*this = src;
	std::cout << "A new Cat was created." << std::endl;
	return;
}

//Destructor
Cat::~Cat(void)
{
	delete _brain;
	std::cout << "A Cat has been slain." << std::endl;
	return;
}

//Assignment Operator Overload
Cat &Cat::operator=(Cat const &src)
{
	this->type = src.type;
	*_brain = *src._brain;
	return *this;
}

//Getter
Brain *Cat::getBrain(void) const
{
	return this->_brain;
}

//Member functions
void Cat::makeSound(void) const
{
	std::cout << "Meow!" << std::endl;
	return;
}
