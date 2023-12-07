#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main(void)
{
	try
	{
		Bureaucrat	Deez("Deez", 149);
		Bureaucrat	Nuts("Nuts", 2);
		PresidentialPardonForm	Work;

		//std::cout << Work << std::endl;
		//std::cout << Work.getTarget() << std::endl;
		
		//Trying to execute without signing
		//Deez.executeForm(Work);
		
		//Trying to execute while grade is too low
		//Nuts.signForm(Work);
		//Deez.executeForm(Work);

		//No error scenario
		//Nuts.signForm(Work);
		//Nuts.executeForm(Work);

	}
	catch (Bureaucrat::GradeTooHighException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (AForm::GradeTooHighException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (AForm::GradeTooLowException &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (AForm::FormIsSigned &err)
	{
		std::cerr << err.what() << std::endl;
	}
	catch (AForm::FormIsNotSigned &err)
	{
		std::cerr << err.what() << std::endl;
	}

	return 0;
}