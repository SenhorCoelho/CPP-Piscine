#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
# include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
	public:

		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const &src);
		~ScavTrap(void);

		ScavTrap &operator=(ScavTrap const &src);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void guardGate(void);
		void displayStatus(void);
};

#endif

