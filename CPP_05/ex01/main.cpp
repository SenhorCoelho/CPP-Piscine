#include "Bureaucrat.hpp"

int main(void)
{
	try
	{
		/*
		TODO
		-Create Better Tests
		-Add the <<(insertion) operator overload
		*/

		Bureaucrat Deez("Deez", 149);
		Bureaucrat Nuts("Nuts", 2);

		//Deez's information without and with Insertion overload.
		std::cout << Deez.getName() << std::endl;
		std::cout << Deez.getGrade() << std::endl;
		std::cout << Deez;

		//Nuts' information without and with Insertion overload.
		std::cout << Nuts.getName() << std::endl;
		std::cout << Nuts.getGrade() << std::endl;
		std::cout << Nuts;

		//Testing Grade changes
		Deez.GradeDown();
		std::cout << Deez;
		
		//Trying to go below 150
		//Deez.GradeDown();

		Nuts.GradeUp();
		std::cout << Nuts;
		
		//Trying to go above 1
		//Nuts.GradeUp();

	}
	catch (Bureaucrat::GradeTooHighException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &err)
	{
		std::cerr << err.what() << std::endl;
	}

	return 0;
}