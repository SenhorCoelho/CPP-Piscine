#include "FragTrap.hpp"

//Constructor
FragTrap::FragTrap(void) : ClapTrap()
{
	this->_Name = "Placeholder";
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AtkDmg = 30;
	std::cout << this->_Name << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Name constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{

	this->_Name = name;
	this->_HitPts = 100;
	this->_EnergyPts = 100;
	this->_AtkDmg = 30;
	return;
}

//Copy constructor
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << this->_Name << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Destructor
FragTrap::~FragTrap(void)
{
	std::cout << this->_Name << " Destructor Called.(FragTrap)" << std::endl;
	return;
}

//Assignment operator overload
FragTrap &FragTrap::operator=(FragTrap const &src)
{
	this->_Name = src._Name;
	this->_HitPts = src._HitPts;
	this->_EnergyPts = src._EnergyPts;
	this->_AtkDmg = src._AtkDmg;
	return *this;
}

//Member Functions
void FragTrap::attack(const std::string &target)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{ 
		std::cout	<< "FragTrap "
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
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is out of energy points and can't attack."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is dead and can't attack."
					<< std::endl;
	}
	displayStatus();
	return;
}


void FragTrap::takeDamage(unsigned int amount)
{
	int	HP;

	HP = this->_HitPts;
	if (HP > 0)
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " takes "
					<< amount
					<< " point(s) of damage!"
					<< std::endl;
		if ((HP - int(amount)) <= 0)
		{
			std::cout	<< "FragTrap "
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

void FragTrap::beRepaired(unsigned int amount)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{ 
		std::cout	<< "FragTrap "
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
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is out of energy points and can't repair itself."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is dead and can't repair itself."
					<< std::endl;
	}
	displayStatus();
	return;
}

void FragTrap::highFivesGuys(void)
{
	if (this->_EnergyPts > 0 && this->_HitPts > 0)
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is requesting High Fives, Guys!"
					<< std::endl;
	}
	else if (this->_EnergyPts == 0)
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is out of energy and can't request High Fives."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< this->_Name
					<< " is dead and can't request High Fives."
					<< std::endl;
	}
	return;
}

void FragTrap::displayStatus(void)
{
	std::cout	<< "FragTrap "
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

