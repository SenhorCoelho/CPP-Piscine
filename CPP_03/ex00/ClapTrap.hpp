#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <iostream>

class ClapTrap
{
	public:

		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		~ClapTrap(void);

		ClapTrap &operator=(ClapTrap const &src);

		std::string getName(void) const;
		unsigned int getHitPts(void) const;
		unsigned int getEnergyPts(void) const;
		unsigned int getAtkDmg(void) const;

		void setName(std::string name);
		void setHitPts(unsigned int val);
		void setEnergyPts(unsigned int val);
		void setAtkDmg(unsigned int val);

		void attack(const std::string &target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		void displayStatus(void);

	private:

		std::string		_Name;
		unsigned int	_HitPts;
		unsigned int	_EnergyPts;
		unsigned int	_AtkDmg;
};

#endif