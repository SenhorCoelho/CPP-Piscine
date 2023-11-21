#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP
# include <iostream>
# include <string>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		WrongAnimal(WrongAnimal const &src);
		virtual ~WrongAnimal(void);

		virtual WrongAnimal &operator=(WrongAnimal const &src);

		std::string getType(void) const;

		virtual void makeSound(void) const;

	protected:

		std::string type;

	private:

};

#endif

