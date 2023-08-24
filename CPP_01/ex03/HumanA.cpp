#include "HumanA.hpp"

//Constructor
HumanA::HumanA(std::string id, Weapon &type) : name (id), weapon (type)
{
	return;
}

//Destructor
HumanA::~HumanA(void)
{
	return;
}

void HumanA::attack(void)
{
	std::cout	<< this->name
				<< " attacks with their "
				<< weapon.getType()
				<< std::endl;
	return;
}