#ifndef HUMANA_HPP
# define HUMANA_HPP
# include <string>
# include <iostream>
# include "Weapon.hpp"

class HumanA
{
	public:

		HumanA(std::string id, Weapon &type);
		~HumanA(void);
		void attack(void);

	private:
		std::string name;
		Weapon &weapon;
};

#endif