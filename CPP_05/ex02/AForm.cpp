#include "AForm.hpp"

//Default Constructor
AForm::AForm(void) : _name("Again"), _signGrade(70), _execGrade(70), _signed(false)
{
	return;
}

//Name + Grade Constructor
AForm::AForm(std::string const name,  const unsigned int signGrade, const unsigned int execGrade) :
_name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	HandleErrors();
	return;
}

//Copy Constructor
AForm::AForm(const AForm &src) : 
_name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _signed(false)
{;
	return;
}

//Destructor
AForm::~AForm(void)
{
	return;
}

//Nested Class (Exceptions)
const char *AForm::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high.";
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low.";
}

const char *AForm::FormIsSigned::what() const throw()
{
	return "Error: The form has already been signed.";
}

const char *AForm::FormIsNotSigned::what() const throw()
{
	return "Error: The form has not been signed yet.";
}

//Operator Overloads

//Assignment
//Since the base form can't be instantiated, I need another way to do this.
//AForm &AForm::operator=(const AForm &src)
//{
//	AForm tmp(src);
//	*this = tmp;
//	return *this;
//}

//Insertion
std::ostream &operator<<(std::ostream &o, AForm const &src)
{
	o	<< "A boring "
		<< src.getName()
		<< " form. Needs a grade of "
		<< src.getSignGrade()
		<< " to be signed and a grade of "
		<< src.getExecGrade()
		<< " to be executed."
		<< std::endl;
	return o;
}

//Getters & Setters
const std::string AForm::getName(void) const
{
	return this->_name;
}

unsigned int AForm::getSignGrade(void) const
{
	return this->_signGrade;
}

unsigned int AForm::getExecGrade(void) const
{
	return this->_execGrade;
}

//Member Functions
bool AForm::isSigned(void) const
{
	return this->_signed;
}

void AForm::beSigned(Bureaucrat signatory)
{
	if (this->_signed == true)
		throw FormIsSigned();
	if (signatory.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

void AForm::HandleErrors(void) const
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw GradeTooHighException();
	else if (this->_signGrade > 150 || this->_execGrade > 150)
		throw GradeTooLowException();
	return;
}
