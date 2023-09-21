#include "FragTrap.hpp"

//Constructor
FragTrap::FragTrap(void) : ClapTrap()
{
	setName("Placeholder");
	setHitPts(100);
	setEnergyPts(100);
	setAtkDmg(30);
	std::cout << getName() << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Name constructor
FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setHitPts(100);
	setEnergyPts(100);
	setAtkDmg(30);
	std::cout << getName() << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Copy constructor
FragTrap::FragTrap(FragTrap const &src) : ClapTrap(src)
{
	*this = src;
	std::cout << getName() << " Constructor Called.(FragTrap)" << std::endl;
	return;
}

//Destructor
FragTrap::~FragTrap(void)
{
	std::cout << getName() << " Destructor Called.(FragTrap)" << std::endl;
	return;
}

//Assignment operator overload
FragTrap &FragTrap::operator=(FragTrap const &src)
{
	setName(src.getName());
	setHitPts(src.getHitPts());
	setEnergyPts(src.getEnergyPts());
	setAtkDmg(src.getAtkDmg());
	return *this;
}

//Member functions
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