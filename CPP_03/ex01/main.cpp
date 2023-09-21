#include "ScavTrap.hpp"

int main() {
    // Create a ClapTrap object
    ScavTrap claptrap("CL4P-TP");
	ScavTrap TR4PCLAP("TR4PCLAP");

    // Test the attack, takeDamage, and beRepaired functions
    claptrap.attack("TR4PCLAP");
	std::cout << std::endl;
    TR4PCLAP.takeDamage(claptrap.getAtkDmg());
	std::cout << std::endl;
	TR4PCLAP.beRepaired(200);
	std::cout << std::endl;
	claptrap.beRepaired(2000);
	std::cout << std::endl;
	TR4PCLAP.setAtkDmg(9999);
	std::cout << std::endl;
	TR4PCLAP.attack("claptrap");
	std::cout << std::endl;
    claptrap.takeDamage(TR4PCLAP.getAtkDmg());
	std::cout << std::endl;
	TR4PCLAP.guardGate();
	std::cout << std::endl;
	TR4PCLAP.setHitPts(0);
	TR4PCLAP.guardGate();
	std::cout << std::endl;
	TR4PCLAP.setHitPts(100);
	TR4PCLAP.setEnergyPts(0);
	TR4PCLAP.guardGate();
	std::cout << std::endl;
    return 0;
}