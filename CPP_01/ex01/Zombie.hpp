#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
	public:

		Zombie (void);
		~Zombie (void);
		void announce (void);
		void setName (std::string name);
	
	private:
		std::string _Name;
};
Zombie *zombieHorde(int N, std::string name);
#endif
