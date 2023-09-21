#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{
	Brain DogBrain;
	Brain CatBrain;
	Animal *shelter[10];

	Animal *RandomCat = new Cat();
	Animal *RandomDog = new Dog();

	Animal *TempDog = RandomDog; 
	Animal *TempCat = RandomCat;

	for(int i = 0; i < 10; i++)
		if (i < 5)
			shelter[i] = new Cat();
		else
			shelter[i] = new Dog();

	DogBrain.setIdea("Waggle Tail");
	DogBrain.setIdea("Lick");
	CatBrain.setIdea("Purrr");
	CatBrain.setIdea("Fish");

	shelter[0]->assignBrain(CatBrain);
	shelter[9]->assignBrain(DogBrain);

	shelter[0]->thinkAloud();
	shelter[9]->thinkAloud();
	std::cout << "NO BRAINERS" << std::endl;
	RandomCat->thinkAloud();
	RandomDog->thinkAloud();

	RandomCat = shelter[0];
	RandomDog = shelter[9];

	std::cout << "NO BRAINERS AFTER DEEP COPY" << std::endl;
	RandomCat->thinkAloud();
	RandomDog->thinkAloud();

	for(int i = 0; i < 10; i++)
	{
		std::cout << i << std::endl;
		shelter[i]->makeSound();
		delete shelter[i];
	}
	delete TempCat;
	delete TempDog;

	return 0;
}
