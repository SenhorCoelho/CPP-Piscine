#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
	try
	{
		Bureaucrat	Deez("Deez", 149);
		Bureaucrat	Nuts("Nuts", 2);
		Form		Work("2319", 3, 30);

		//testing Creating forms with good and bad grades, without the correct catches
		
		//Standard (works)
		//Form Test1;
		//std::cout << Test1 << std::endl;

		//Name constructor (works)
		//Form Test2("2319", 25, 30);
		//std::cout << Test2 << std::endl;

		//Copy constructor (works)
		//Form A("2319", 1, 150);
		//Form B(A);
		//
		//std::cout << "A: " << A << std::endl;
		//std::cout << "B: " << B << std::endl;

		//Assignment overload (works)
		//Form A;
		//Form B = A;
		//
		//std::cout << "A: " << A << std::endl;
		//std::cout << "B: " << B << std::endl;

		//Grade too high (Sign and Execute)
		//Form TestGrade("2319", 0, 30);
		//Form TestGrade("2319", 30, 0);
	
		//Grade too low (Sign and Execute)
		//Form TestGrade("2319", 160, 30);
		//Form TestGrade("2319", 30, 160);

		//Signing a form:
		//Higher grade (works)
		//Nuts.signForm(Work);

		//Same Grade (works)
		//Nuts.GradeDown();
		//std::cout << Nuts << std::endl;
		//Nuts.signForm(Work);

		//Lower Grade (works)
		//Deez.signForm(Work);

		//Already signed (works)
		//Nuts.signForm(Work);
		//Nuts.signForm(Work);
	}
	catch (Bureaucrat::GradeTooHighException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Form::GradeTooHighException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Form::GradeTooLowException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Form::FormIsSigned &err)
	{
		std::cerr << err.what() << std::endl;
	}

	return 0;
}