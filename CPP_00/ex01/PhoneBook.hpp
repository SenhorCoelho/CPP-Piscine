#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define SIZE 8
# define CELL std::cout.width(10);
# include "Contact.hpp"
# include <iomanip>

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		void	ShowContacts(void);

	private:
		Contact	_ConLis[SIZE];
		int		_NbCon;
};

#endif