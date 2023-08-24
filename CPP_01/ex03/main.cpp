#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main()
{
	//Extra stuff on Weapon class to prevent empty inputs?
	{
//		Weapon club = Weapon("crude spiked club");
//		HumanA bob("Bob", club);
//		bob.attack();
//		club.setType("some other type of club");
//		bob.attack();
	}
	{
		Weapon club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.attack();
		jim.setWeapon(club);
		club.setType("some other type of club");
		jim.attack();
	}
	return 0;
}