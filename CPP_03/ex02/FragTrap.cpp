#include "FragTrap.hpp"

//Default Constructor
FragTrap::FragTrap(void) : ClapTrap()
{	
	setHitPts(100);
	setEnergyPts(100);
	setAtkDmg(30);
	std::cout << getName() << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Name Constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPts(100);
	setEnergyPts(100);
	setAtkDmg(30);
	std::cout << getName() << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Copy Constructor
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << getName() << "Constructor Called." << std::endl;
	return;
}

//Destructor
FragTrap::~FragTrap(void)
{
	std::cout << getName() << " Destructor Called.(FragTrap)" << std::endl;
	return;
}

//Assignment Operator Overload
FragTrap &FragTrap::operator=(FragTrap const &src)
{
	setName(src.getName());
	setHitPts(src.getHitPts());
	setEnergyPts(src.getEnergyPts());
	setAtkDmg(src.getAtkDmg());
	return *this;
}


//Member Functions
void FragTrap::attack(const std::string &target)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "FragTrap "
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
		std::cout	<< "FragTrap "
					<< getName()
					<< " is out of energy points and can't attack."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " is dead and can't attack."
					<< std::endl;
	}
	displayStatus();
	return;
}


void FragTrap::takeDamage(unsigned int amount)
{
	int	HP;

	HP = getHitPts();
	if (HP > 0)
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " takes "
					<< amount
					<< " point(s) of damage!"
					<< std::endl;
		if ((HP - int(amount)) <= 0)
		{
			std::cout	<< "FragTrap "
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

void FragTrap::beRepaired(unsigned int amount)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{ 
		std::cout	<< "FragTrap "
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
		std::cout	<< "FragTrap "
					<< getName()
					<< " is out of energy points and can't repair itself."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " is dead and can't repair itself."
					<< std::endl;
	}
	displayStatus();
	return;
}

void FragTrap::highFivesGuys(void)
{
	if (getEnergyPts() > 0 && getHitPts() > 0)
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " is requesting High Fives, Guys!"
					<< std::endl;
	}
	else if (getEnergyPts() == 0)
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " is out of energy and can't request High Fives."
					<< std::endl;
	}
	else
	{
		std::cout	<< "FragTrap "
					<< getName()
					<< " is dead and can't request High Fives."
					<< std::endl;
	}
	return;
}

void FragTrap::displayStatus(void)
{
	std::cout	<< "FragTrap "
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
