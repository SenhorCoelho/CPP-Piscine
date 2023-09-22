#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
# include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
	public:

		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const &src);
		~FragTrap(void);

		FragTrap &operator=(FragTrap const &src);

		
		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		void displayStatus(void);
		void highFivesGuys(void);

	private:

		std::string		_Name;
		unsigned int	_HitPts;
		unsigned int	_EnergyPts;
		unsigned int	_AtkDmg;
};

#endif

