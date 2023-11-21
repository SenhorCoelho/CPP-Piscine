#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <string>
# include <stdexcept>

class Bureaucrat
{
	public:

		//Constructors & Destructor
		Bureaucrat(void);
		Bureaucrat(std::string const name, unsigned int grade);
		Bureaucrat(const Bureaucrat &src);
		~Bureaucrat(void);

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

		//Operators Overloads
		Bureaucrat &operator=(const Bureaucrat &src);

		//Getters & Setters
		std::string getName(void) const;
		unsigned int getGrade(void) const;

		//Member Functions/Methods
		void GradeUp(void);
		void GradeDown(void);
		void HandleErrors(void) const;

	private:

		std::string const	_name;
		unsigned int		_grade;

};

	std::ostream &operator<<(std::ostream &o, Bureaucrat const &src);

#endif