#include "Bureaucrat.hpp"

//Default Constructor
Bureaucrat::Bureaucrat(void) : _name("Joe Mama"), _grade(69)
{
	return;
}

//Name + Grade Constructor
Bureaucrat::Bureaucrat(std::string const name, unsigned int grade) :
_name(name), _grade(grade) 
{
	HandleErrors();
	return;
}

//Copy Constructor
Bureaucrat::Bureaucrat(const Bureaucrat &src) : 
_name(src.getName()), _grade(src.getGrade())
{
	return;
}

//Destructor
Bureaucrat::~Bureaucrat(void)
{
	return;
}

//Nested Class (Exceptions)
const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return "Error: Could not set bureaucrat grade above 1.";
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return "Error: Could not set bureaucrat grade below 150.";
}

//Operator Overloads

//Assignment
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &src)
{
	//Name must be const, so can't redefine it when copying;
	//this->_name = src.getName();
	this->_grade = src.getGrade();
	return *this;
}

//Insertion
std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
	o	<< src.getName()
		<< ", bureaucrat grade "
		<< src.getGrade()
		<< "."
		<< std::endl;
	return o;
}

//Getters & Setters
std::string Bureaucrat::getName(void) const
{
	return this->_name;
}

unsigned int Bureaucrat::getGrade(void) const
{
	return this->_grade;
}

//Member Functions
void Bureaucrat::GradeUp(void)
{
	this->_grade--;
	this->HandleErrors();
	return;
}

void Bureaucrat::GradeDown(void)
{
	this->_grade++;
	this->HandleErrors();
	return;
}

void Bureaucrat::HandleErrors(void) const
{
	if (this->_grade < 1)
		throw GradeTooHighException();
	else if (this->_grade > 150)
		throw GradeTooLowException();
	return;
}

void Bureaucrat::signForm(AForm &paperwork)
{
	if(paperwork.isSigned())
		std::cout	<< this->_name
					<< " couldn't sign form "
					<< paperwork.getName()
					<< " because it's already signed."
					<< std::endl;
	else if(this->getGrade() > paperwork.getSignGrade())
		std::cout	<< this->_name
					<< " couldn't sign form "
					<< paperwork.getName()
					<< " because his grade is too low."
					<< std::endl;
	else
		std::cout	<< this->_name
					<< " signed form "
					<< paperwork.getName()
					<< "."
					<< std::endl;
	paperwork.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const &form)
{
	if(! form.isSigned())
		std::cout	<< this->_name
					<< " couldn't execute form "
					<< form.getName()
					<< " because it's not signed."
					<< std::endl;
	else if(this->getGrade() > form.getSignGrade())
		std::cout	<< this->_name
					<< " couldn't execute form "
					<< form.getName()
					<< " because his grade is too low."
					<< std::endl;
	else
		std::cout	<< this->_name
					<< " executed "
					<< form.getName()
					<< "."
					<< std::endl;
	form.execute(*this);
}
