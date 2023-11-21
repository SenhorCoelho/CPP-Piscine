#include "ScavTrap.hpp"

//Default Constructor
ScavTrap::ScavTrap(void) : ClapTrap()
{	
	setHitPts(100);
	setEnergyPts(50);
	setAtkDmg(20);
	std::cout << getName() << " Constructor Called.(ScavTrap)" << std::endl;
	return;
}

//Name Constructor
ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHitPts(100);
	setEnergyPts(50);
	setAtkDmg(20);
	std::cout << getName() << " Constructor Called.(ScavTrap)" << std::endl;
	return;
}

//Copy Constructor
ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << getName() << "Constructor Called." << std::endl;
	return;
}

//Destructor
ScavTrap::~ScavTrap(void)
{
	std::cout << getName() << " Destructor Called.(ScavTrap)" << std::endl;
	return;
}

//Assignment Operator Overload
ScavTrap &ScavTrap::operator=(ScavTrap const &src)
{
	setName(src.getName());
	setHitPts(src.getHitPts());
	setEnergyPts(src.getEnergyPts());
	setAtkDmg(src.getAtkDmg());
	return *this;
}


//Member Functions
void ScavTrap::attack(const std::string &target)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "ScavTrap "
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
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is out of energy points and can't attack."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is dead and can't attack."
					<< std::endl;
	}
	displayStatus();
	return;
}


void ScavTrap::takeDamage(unsigned int amount)
{
	int	HP;

	HP = getHitPts();
	if (HP > 0)
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " takes "
					<< amount
					<< " point(s) of damage!"
					<< std::endl;
		if ((HP - int(amount)) <= 0)
		{
			std::cout	<< "ScavTrap "
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

void ScavTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "ScavTrap "
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
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is out of energy points and can't repair itself."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is dead and can't repair itself."
					<< std::endl;
	}
	displayStatus();
	return;
}

void ScavTrap::guardGate(void)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is now in Gate keeper mode."
					<< std::endl;
	}
	else if (getEnergyPts() == 0)
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is out of energy points and can't guard the gate."
					<< std::endl;
	}
	else
	{
		std::cout	<< "ScavTrap "
					<< getName()
					<< " is dead and can't guard the gate."
					<< std::endl;
	}
}

void ScavTrap::displayStatus(void)
{
	std::cout	<< "ScavTrap "
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
