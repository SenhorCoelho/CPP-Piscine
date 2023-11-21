#include "Form.hpp"

//Default Constructor
Form::Form(void) : _name("Again"), _signGrade(70), _execGrade(70), _signed(false)
{
	return;
}

//Name + Grade Constructor
Form::Form(std::string const name,  const unsigned int signGrade, const unsigned int execGrade) :
_name(name), _signGrade(signGrade), _execGrade(execGrade), _signed(false)
{
	HandleErrors();
	return;
}

//Copy Constructor
Form::Form(const Form &src) : 
_name(src.getName()), _signGrade(src.getSignGrade()), _execGrade(src.getExecGrade()), _signed(false)
{;
	return;
}

//Destructor
Form::~Form(void)
{
	return;
}

//Nested Class (Exceptions)
const char *Form::GradeTooHighException::what() const throw()
{
	return "Error: Grade is too high.";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Error: Grade is too low.";
}

const char *Form::FormIsSigned::what() const throw()
{
	return "Error: The form has already been signed.";
}

//Operator Overloads

//Assignment
Form &Form::operator=(const Form &src)
{
	Form tmp(src);
	*this = tmp;
	return *this;
}

//Insertion
std::ostream &operator<<(std::ostream &o, Form const &src)
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
const std::string Form::getName(void) const
{
	return this->_name;
}

const unsigned int Form::getSignGrade(void) const
{
	return this->_signGrade;
}

const unsigned int Form::getExecGrade(void) const
{
	return this->_execGrade;
}

//Member Functions
bool Form::isSigned(void) const
{
	return this->_signed;
}

void Form::beSigned(const Bureaucrat signatory)
{
	if (this->_signed == true)
		throw FormIsSigned();
	if (signatory.getGrade() > this->getSignGrade())
		throw GradeTooLowException();
	this->_signed = true;
}

void Form::HandleErrors(void) const
{
	if (this->_signGrade < 1 || this->_execGrade < 1)
		throw GradeTooHighException();
	else if (this->_signGrade < 150 || this->_execGrade < 150)
		throw GradeTooLowException();
	return;
}
