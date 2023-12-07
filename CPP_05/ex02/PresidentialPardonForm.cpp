#include "PresidentialPardonForm.hpp"

//Default Constructor
PresidentialPardonForm::PresidentialPardonForm(void) :
AForm("Presidential Pardon", 25, 5),  _target("Arthur")
{
	return;
}

//Name constructor
PresidentialPardonForm::PresidentialPardonForm(std::string target) :
AForm("Presidential Pardon", 25, 5), _target(target)
{
	return;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	return;
}

//Getters & Setters
std::string PresidentialPardonForm::getTarget(void) const
{
	return this->_target;
}

//Member functions
void PresidentialPardonForm::execute(const Bureaucrat &executor) const
{
	if (! isSigned())
		throw FormIsNotSigned();
	if (executor.getGrade() > getExecGrade())
		throw GradeTooLowException();
	std::cout	<< getTarget()
				<< " has been pardoned by Zaphod Beeblebrox."
				<< std::endl;
}