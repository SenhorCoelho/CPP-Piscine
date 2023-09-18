#include "ClapTrap.hpp"

//Default Constructor
ClapTrap::ClapTrap(void) : _Name ("Placeholder"),
_HitPts (10), _EnergyPts (10), _AtkDmg(0)
{	
	std::cout << getName() << " Constructor Called." << std::endl;
	return;
}

//Name Constructor
ClapTrap::ClapTrap(std::string name) : _Name (name),
_HitPts (10), _EnergyPts (10), _AtkDmg(0)
{
	std::cout << getName() << " Constructor Called." << std::endl;
	return;
}

//Copy Constructor
ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << getName() << "Constructor Called." << std::endl;
	return;
}

//Destructor
ClapTrap::~ClapTrap(void)
{
	std::cout << getName() << " Destructor Called." << std::endl;
	return;
}

//Assignment Operator Overload
ClapTrap &ClapTrap::operator=(ClapTrap const &src)
{
	setName(src.getName());
	setHitPts(src.getHitPts());
	setEnergyPts(src.getEnergyPts());
	setAtkDmg(src.getAtkDmg());
	return *this;
}

//Getters
std::string ClapTrap::getName(void) const
{
	return this->_Name;
}

unsigned int ClapTrap::getHitPts(void) const
{
	return this->_HitPts;
}

unsigned int ClapTrap::getEnergyPts(void) const
{
	return this->_EnergyPts;
}

unsigned int ClapTrap::getAtkDmg(void) const
{
	return this->_AtkDmg;
}

//Setters
void ClapTrap::setName(std::string name)
{
	this->_Name = name;
	return;
}

void ClapTrap::setHitPts(unsigned int val)
{
	this->_HitPts = val;
	return;
}
void ClapTrap::setEnergyPts(unsigned int val)
{
	this->_EnergyPts = val;
	return;
}
void ClapTrap::setAtkDmg(unsigned int val)
{
	this->_AtkDmg = val;
	return;
}

//Member Functions
void ClapTrap::attack(const std::string &target)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "ClapTrap "
					<< getName()
					<< " attacks "
					<< target
					<< ", causing "
					<< getAtkDmg()
					<< " point(s) of damage!"
					<< std::endl;
		setEnergyPts(getEnergyPts() - 1);
	}
	else if (getEnergyPts() == 0)
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " is out of energy points and can't attack."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " is dead and can't attack."
					<< std::endl;
	}
	displayStatus();
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	int	HP;

	HP = getHitPts();
	if (HP > 0)
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " takes "
					<< amount
					<< " point(s) of damage!"
					<< std::endl;
		if ((HP - int(amount)) <= 0)
		{
			std::cout	<< "ClapTrap "
						<< getName()
						<< " has been killed by the attack."
						<< std::endl;
			setHitPts(0);
		}
		else
			setHitPts(HP - amount);
		displayStatus();
		return;
	}
		
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "ClapTrap "
					<< getName()
					<< " repairs itself, healing "
					<< amount
					<< " hit point(s)!"
					<< std::endl;
		setEnergyPts(getEnergyPts() - 1);
		setHitPts(getHitPts() + amount);
	}
	else if (getEnergyPts() == 0)
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " is out of energy points and can't repair itself."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ClapTrap "
					<< getName()
					<< " is dead and can't repair itself."
					<< std::endl;
	}
	displayStatus();
	return;
}

void ClapTrap::displayStatus(void)
{
	std::cout	<< "ClapTrap "
				<< getName()
				<< " current status: "
				<< std::endl
				<< "Hit Points: "
				<< getHitPts()
				<< std::endl
				<< "Energy Points: "
				<< getEnergyPts()
				<< std::endl
				<< "Attack Damage: "
				<< getAtkDmg()
				<< std::endl;
	return;
}