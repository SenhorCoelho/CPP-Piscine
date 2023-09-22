#include "ScavTrap.hpp"

//Default Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{	
	this->_Name = "Placeholder";
	this->_HitPts = 100;
	this->_EnergyPts = 50;
	this->_AtkDmg = 20;
	std::cout << this->_Name << " Constructor Called.(ScavTrap)" << std::endl;
	return;
}

//Name Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	
	this->_Name = name;
	this->_HitPts = 100;
	this->_EnergyPts = 50;
	this->_AtkDmg = 20;
	std::cout << this->_Name << " Constructor Called.(ScavTrap)" << std::endl;
	return;
}

//Copy Constructor
ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << this->_Name << "Constructor Called." << std::endl;
	return;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << this->_Name << " Destructor Called.(ScavTrap)" << std::endl;
	return;
}

//Assignment Operator Overload
ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	this->_Name = src.getName();
	this->_HitPts = src.getHitPts();
	this->_EnergyPts = src.getEnergyPts();
	this->_AtkDmg = src.getAtkDmg();
	return *this;
}


//Member Functions
void ScavTrap::attack(const std::string &target)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{ 
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " attacks "
					<< target
					<< ", causing "
					<< this->_AtkDmg
					<< " point(s) of damage!"
					<< std::endl;
		this->_EnergyPts -= 1;
	}
	else if (this->_EnergyPts == 0)
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is out of energy points and can't attack."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is dead and can't attack."
					<< std::endl;
	}
	displayStatus();
	return;
}


void ScavTrap::takeDamage(unsigned int amount)
{
	int	HP;

	HP = this->_HitPts;
	if (HP > 0)
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " takes "
					<< amount
					<< " point(s) of damage!"
					<< std::endl;
		if ((HP - int(amount)) <= 0)
		{
			std::cout	<< "ScavTrap "
						<< this->_Name
						<< " has been killed by the attack."
						<< std::endl;
			this->_HitPts = 0;
		}
		else
			this->_HitPts = HP - amount;
		displayStatus();
		return;
	}
		
}

void ScavTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{ 
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " repairs itself, healing "
					<< amount
					<< " hit point(s)!"
					<< std::endl;
		this->_EnergyPts -= 1;
		this->_HitPts += amount;
	}
	else if (this->_EnergyPts == 0)
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is out of energy points and can't repair itself."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is dead and can't repair itself."
					<< std::endl;
	}
	displayStatus();
	return;
}

void ScavTrap::guardGate(void)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is now in Gate keeper mode."
					<< std::endl;
	}
	else if (this->_EnergyPts == 0)
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is out of energy points and can't guard the gate."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< this->_Name
					<< " is dead and can't guard the gate."
					<< std::endl;
	}
}

void ScavTrap::displayStatus(void)
{
	std::cout	<< "ScavTrap "
				<< this->_Name
				<< " current status: "
				<< std::endl
				<< "Hit Points: "
				<< this->_HitPts
				<< std::endl
				<< "Energy Points: "
				<< this->_EnergyPts
				<< std::endl
				<< "Attack Damage: "
				<< this->_AtkDmg
				<< std::endl;
	return;
}
