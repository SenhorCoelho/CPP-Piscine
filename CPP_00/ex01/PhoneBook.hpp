#ifndef PHONEBOOK_H
# define PHONEBOOK_H
# define SIZE 8
# include "Contact.hpp"
# include <iomanip>
# include <cstring>
# include <cstdlib>
# include <iostream>

class PhoneBook
{
	public:

		PhoneBook(void);
		~PhoneBook(void);
		void	AddContact(void);
		int	ShowList(void) const;
		void	ShowContact(std::string str) const;

	private:
		Contact	_ConLis[SIZE];
		int		_NbCon;
};

#endif
