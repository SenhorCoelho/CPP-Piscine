#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <stdexcept>
# include "Bureaucrat.hpp"

//Had to forward declare due to cyclic dependency
class Bureaucrat;

class Form
{
	public:

		//Constructors & Destructor
		Form(void);
		Form(std::string const name, const unsigned int signGrade, const unsigned int execGrade);
		Form(const Form &src);
		~Form(void);

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

		//Operators Overloads
		Form &operator=(const Form &src);

		//Getters & Setters
		const std::string getName(void) const;
		unsigned int getSignGrade(void) const;
		unsigned int getExecGrade(void) const;

		//Member Functions/Methods
		bool isSigned(void) const;
		void beSigned(Bureaucrat signatory);
		void HandleErrors(void) const;

	private:

		const std::string	_name;
		const unsigned int	_signGrade;
		const unsigned int	_execGrade;
		bool				_signed;

};

	std::ostream &operator<<(std::ostream &o, Form const &src);

#endif