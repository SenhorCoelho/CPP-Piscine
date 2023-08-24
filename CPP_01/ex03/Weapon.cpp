#include "Weapon.hpp"

//Constructor
Weapon::Weapon(std::string name)
{
	this->type = name;
	return;
}

//Destructor
Weapon::~Weapon(void)
{
	return;
}

const std::string &Weapon::getType(void)
{
	return this->type;
}

void Weapon::setType(std::string ntype)
{
	this->type = ntype;
	return;
}