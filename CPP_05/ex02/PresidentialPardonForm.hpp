#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP
# include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
		//Constructors & Destructor
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
	//	PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm(void);

		//Getters & Setters
		std::string getTarget(void) const;

		//Member functions/Methods
		void execute(const Bureaucrat &executor) const;
	
	private:
		std::string _target;

};

#endif