#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() {
    // Create a ClapTrap object
	ScavTrap TR4PCLAP("TR4PCLAP");
	FragTrap CLAPCLAP("CLAPCLAP");

    // Test the attack, takeDamage, and beRepaired functions
    CLAPCLAP.attack("TR4PCLAP");
	std::cout << std::endl;
    TR4PCLAP.takeDamage(CLAPCLAP.getAtkDmg());
	std::cout << std::endl;
	TR4PCLAP.beRepaired(200);
	std::cout << std::endl;
	CLAPCLAP.beRepaired(2000);
	std::cout << std::endl;
	TR4PCLAP.setAtkDmg(9999);
	std::cout << std::endl;
	TR4PCLAP.attack("claptrap");
	std::cout << std::endl;
    CLAPCLAP.takeDamage(TR4PCLAP.getAtkDmg());
	std::cout << std::endl;
	TR4PCLAP.guardGate();
	std::cout << std::endl;
	CLAPCLAP.highFivesGuys();
	std::cout << std::endl;
	CLAPCLAP.setHitPts(100);
	CLAPCLAP.highFivesGuys();
	std::cout << std::endl;
	CLAPCLAP.setEnergyPts(0);
	CLAPCLAP.highFivesGuys();
	std::cout << std::endl;
    return 0;
}

