#include "ClapTrap.hpp"

int main() {
    // Create a ClapTrap object
    ClapTrap claptrap("CL4P-TP");
	ClapTrap TR4PCLAP("TR4PCLAP");

    // Test the attack, takeDamage, and beRepaired functions
    claptrap.attack("TR4PCLAP");
	std::cout << std::endl;
    TR4PCLAP.takeDamage(claptrap.getAtkDmg());
	std::cout << std::endl;
	TR4PCLAP.beRepaired(200);
	claptrap.beRepaired(2000);
	std::cout << std::endl;
	TR4PCLAP.setAtkDmg(9999);
	std::cout << std::endl;
	TR4PCLAP.attack("CL4P-TP");
	std::cout << std::endl;
    claptrap.takeDamage(TR4PCLAP.getAtkDmg());
	
	std::cout << std::endl;
    return 0;
}

