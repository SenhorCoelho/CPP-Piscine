#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon
{
	public:

		Weapon(std::string name);
		~Weapon(void);
		const std::string &getType(void);
		void setType(std::string ntype);

	private:

		std::string type;
};

#endif