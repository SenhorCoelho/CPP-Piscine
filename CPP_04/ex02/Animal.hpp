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

		virtual Animal &operator=(Animal const &src);

		std::string getType(void) const;
		virtual Brain *getBrain(void) const;

		virtual void makeSound(void) const = 0;

	protected:

		std::string type;

	private:

		Brain *_brain;

};

#endif

