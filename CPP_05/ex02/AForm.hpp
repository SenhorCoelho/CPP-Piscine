#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

//Had to forward declare due to cyclic dependency
class Bureaucrat;

class AForm
{
	public:

		//Alongside making the class unable to be instantiated, =0 should be
		//something that I want only the derived classes to do.

		//Constructors & Destructor
		AForm(void);
		AForm(std::string const name, const unsigned int signGrade, const unsigned int execGrade);
		AForm(const AForm &src);
		virtual ~AForm(void);

		//Create a nested class for exceptions
		class GradeTooHighException : public std::exception
		{
			public:

				const char *what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:

				const char *what() const throw();
		};

		class FormIsSigned : public std::exception
		{
			public:

				const char *what() const throw();
		};

		class FormIsNotSigned : public std::exception
		{
			public:

				const char *what() const throw();
		};

		//Operators Overloads
		//virtual AForm &operator=(const AForm &src);

		//Getters & Setters
		const std::string getName(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;

		//Member Functions/Methods
		bool isSigned(void) const;
		void beSigned(Bureaucrat signatory);
		void HandleErrors(void) const;
		virtual void execute(Bureaucrat const &executor) const = 0;

	private:

		const std::string	_name;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
		bool				_signed;

};

	std::ostream &operator<<(std::ostream &o, AForm const &src);

#endif