#include "Zombie.hpp"

int main(void)
{

	Zombie Zombie1("Rob");
	Zombie1.announce();
	Zombie *Zombie2 = newZombie("Cuelho");
	Zombie2->announce();
	randomChump("Killer");
	delete Zombie2;

	return 0;
}
