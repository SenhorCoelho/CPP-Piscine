#include "HumanB.hpp"

//Constructor
HumanB::HumanB(std::string name) : name (name), weapon (0)
{
	return;
}

//Destructor
HumanB::~HumanB(void)
{
	return;
}

void HumanB::attack(void)
{
	std::cout	<< this->name << " attacks with their ";
	if (weapon)
		std::cout << weapon->getType() << std::endl;
	else
		std::cout << "bare hands" << std::endl;	
	return;
}

void HumanB::setWeapon(Weapon &type)
{
	weapon = &type;
	return;
}

