#include "Zombie.hpp"
#include <iostream>

//Constructor
Zombie::Zombie (std::string name) : _Name (name)
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
}
