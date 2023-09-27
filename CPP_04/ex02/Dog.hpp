#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:

		Dog(void);
		Dog(Dog const &src);
		~Dog(void);

		Dog &operator=(Dog const &src);

		void assignBrain(Brain const &src);
		void thinkAloud(void);
		void makeSound(void) const;
	
	private:

		Brain *_brain;
	
};

#endif