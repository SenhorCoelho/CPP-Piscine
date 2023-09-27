#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main(void)
{

	std::cout << "Creating an Animal.(new)" << std::endl;
	const Animal* testNewAnimal = new Animal();
	std::cout << "-------------------------------------" << std::endl;
	
	std::cout << "Creating a Dog.(new)" << std::endl;
	const Animal* testNewDog = new Dog();
	std::cout << "-------------------------------------" << std::endl;
	
	std::cout << "Creating a Cat.(new)" << std::endl;
	const Animal* testNewCat = new Cat();
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Wrong Animal.(new)" << std::endl;
	const WrongAnimal* testNewWrongAnimal = new WrongAnimal();
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Wrong Cat.(new)" << std::endl;
	const WrongAnimal* testNewWrongCat = new WrongCat();
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating an Animal." << std::endl;
	Animal testAnimal;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Dog." << std::endl;
	Dog testDog;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Cat." << std::endl;
	Cat testCat;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Wrong Animal." << std::endl;
	WrongAnimal testWrongAnimal;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Creating a Wrong Cat." << std::endl;
	WrongCat testWrongCat;
	std::cout << "-------------------------------------" << std::endl;
	
	std::cout << "Creating animals to test copy and assignment" << std::endl;
	Animal CopyCatAll(*testNewCat);
	Animal CopyCat(testCat);
	Animal CopyDogAll(*testNewDog);
	Animal CopyDog(testDog);

	Animal AssignCatAll = *testNewCat;
	Animal AssignCat = testCat;
	Animal AssignDogAll = *testNewDog;
	Animal AssignDog = testDog;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Getting Types" << std::endl;
	std::cout << "Animal new: ";
	std::cout << testNewAnimal->getType() << std::endl;
	std::cout << "Animal: ";
	std::cout << testAnimal.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Wrong Animal new: ";
	std::cout << testNewWrongAnimal->getType() << std::endl;
	std::cout << "Wrong Animal: ";
	std::cout << testWrongAnimal.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Dog new: ";
	std::cout << testNewDog->getType() << std::endl;
	std::cout << "Dog: ";
	std::cout << testDog.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Cat new: ";
	std::cout << testNewCat->getType() << std::endl;
	std::cout << "Cat: ";
	std::cout << testCat.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Wrong Cat new: ";
	std::cout << testNewWrongCat->getType() << std::endl;
	std::cout << "Wrong Cat: ";
	std::cout << testWrongCat.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Copy Cat new: ";
	std::cout << CopyCatAll.getType() << std::endl;
	std::cout << "Animal Copy Cat: ";
	std::cout << CopyCat.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Copy Dog new: ";
	std::cout << CopyDogAll.getType() << std::endl;
	std::cout << "Animal Copy Dog: ";
	std::cout << CopyDog.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Assign Cat new: ";
	std::cout << CopyCatAll.getType() << std::endl;
	std::cout << "Animal Assign Cat: ";
	std::cout << CopyCat.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Assign Dog new: ";
	std::cout << CopyDogAll.getType() << std::endl;
	std::cout << "Animal Assign Dog: ";
	std::cout << CopyDog.getType() << std::endl;
	std::cout << "-------------------------------------" << std::endl;

	std::cout << "Making Sounds" << std::endl;
	std::cout << "Animal new: ";
	testNewAnimal->makeSound();
	std::cout << "Animal: ";
	testAnimal.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Wrong Animal new: ";
	testNewWrongAnimal->makeSound();
	std::cout << "Wrong Animal: ";
	testWrongAnimal.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Dog new: ";
	testNewDog->makeSound();
	std::cout << "Dog: ";
	testDog.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Cat new: ";
	testNewCat->makeSound();
	std::cout << "Cat: ";
	testCat.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Wrong Cat new: ";
	testNewWrongCat->makeSound();
	std::cout << "Wrong Cat: ";
	testWrongCat.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Copy Cat new: ";
	CopyCatAll.makeSound();
	std::cout << "Animal Copy Cat: ";
	CopyCat.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Copy Dog new: ";
	CopyDogAll.makeSound();
	std::cout << "Animal Copy Dog: ";
	CopyDog.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Assign Cat new: ";
	CopyCatAll.makeSound();
	std::cout << "Animal Assign Cat: ";
	CopyCat.makeSound();
	std::cout << "-------------------------------------" << std::endl;


	std::cout << "Animal Assign Dog new: ";
	CopyDogAll.makeSound();
	std::cout << "Animal Assign Dog: ";
	CopyDog.makeSound();
	std::cout << "-------------------------------------" << std::endl;

	delete testNewAnimal;
	delete testNewWrongAnimal;
	delete testNewDog;
	delete testNewCat;
	delete testNewWrongCat;
	return 0;
}
