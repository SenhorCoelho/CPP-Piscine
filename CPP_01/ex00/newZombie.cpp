#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *n= new Zombie(name);

	return n; 
}
