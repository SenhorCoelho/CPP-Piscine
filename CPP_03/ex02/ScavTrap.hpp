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
		void guardGate(void);
		void displayStatus(void);

	private:

		std::string		_Name;
		unsigned int	_HitPts;
		unsigned int	_EnergyPts;
		unsigned int	_AtkDmg;
};

#endif