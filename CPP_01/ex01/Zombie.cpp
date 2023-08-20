#include "Zombie.hpp"
#include <iostream>

//Constructor
Zombie::Zombie (void) : _Name ("Random")
{
	return;
}

//Desctructor
Zombie::~Zombie (void)
{
	std::cout	<< this->_Name
			<< " has been destroyed."
			<< std::endl;
	return;
}

//Announce
void Zombie::announce(void)
{
	std::cout	<< this->_Name
			<< ": BraiiiiiiinnnzzzZ..."
			<< std::endl;
	return;
}

//Name
void Zombie::setName(std::string name)
{
	this->_Name = name;
	return;
}
