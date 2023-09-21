#ifndef CAT_HPP
# define CAT_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal
{
	public:

		Cat(void);
		Cat(Cat const &src);
		~Cat(void);

		Cat &operator=(Cat const &src);

		void assignBrain(Brain const &src);
		void thinkAloud(void);
		void makeSound(void) const;
	
	private:

		Brain *_brain;
	
};

#endif