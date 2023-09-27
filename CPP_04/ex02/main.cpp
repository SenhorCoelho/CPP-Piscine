#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Brain *DogBrain;
	Brain *CatBrain;
	Animal *shelter[2];
//	Animal random;
	
//	shelter[0] = new Animal();
	shelter[0] = new Cat();
	shelter[1] = new Dog();

	CatBrain = shelter[0]->getBrain();
	DogBrain = shelter[1]->getBrain();

	std::cout << "NO BRAINERS" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << DogBrain->ideas[0] << std::endl;
	std::cout << CatBrain->ideas[0] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "BRAINS WITH THOUGHTS" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	DogBrain->ideas[0] = "Waggle Tail.";
	DogBrain->ideas[1] = "Food! Food! Food!";
	CatBrain->ideas[0] = "GIVE ME FOOD NOW!";
	CatBrain->ideas[1] = "Purrr";

	std::cout << "CAT" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "DOG" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "BRAIN AFTER DEEP COPY" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	//Assigning the contento of one brain to another directly through memory address.
	*(shelter[0]->getBrain()) = *(shelter[1]->getBrain());

	std::cout << "CAT" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "DOG" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "DELETING DOG" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	delete shelter[1];
	shelter[1] = new Dog();

	std::cout << "CAT" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[0]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "DOG" << std::endl;
	std::cout << "-------------------------------------" << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[0] << std::endl;
	std::cout << shelter[1]->getBrain()->ideas[1] << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	for(int i = 0; i < 2; i++)
	{
		std::cout << i << std::endl;
		shelter[i]->makeSound();
		delete shelter[i];
	}

	return 0;
}
