#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

class Animal
{
	public:

		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal &operator=(Animal const &src);

		std::string getType(void) const;

		virtual void assignBrain(Brain const &src);
		virtual void thinkAloud(void);
		virtual void makeSound(void) const;

	protected:

		std::string type;
		std::string _sound;

	private:

		Brain *_brain;

};

#endif