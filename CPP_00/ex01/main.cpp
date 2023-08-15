#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>

int main(void)
{
	std::string input;
	PhoneBook myPhonebook;

	std::cout	<< "Welcome to your very own crappy awesome 80's phonebook program!"
				<< std::endl
				<< "Here are the commands available to you:"
				<< std::endl
				<< "ADD : Adds a new contact to the phonebook up to a total of 8. If the list is full, the oldest contact will be deleted."
				<< std::endl
				<< "SEARCH : Shows the short version of the list and each contact's index. Pick one to see detailed information."
				<< std::endl
				<< "EXIT : Terminates the program and deletes your phonebook. Your contacts will be lost forever!"
				<< std::endl
				<< "Please, enter a command: "
				<< std::endl;
	while(1)
	{
		std::cout << "Please, enter a command: " << std::endl;
		std::cin >> input;
		if (input.compare("ADD") == 0)
			myPhonebook.AddContact();
		else if (input.compare("SEARCH") == 0)
		{
			//This should show but also expect to get a number for index
			//What if there's a search with no contacts added?
			myPhonebook.ShowContacts();
		}
		else if (std::cin.eof() || input.compare("EXIT") == 0)
			break;
		else
		{
			std::cout	<< "Command not found."
						<< std::endl
						<< "Here are the commands available to you:"
						<< std::endl
						<< "ADD : Adds a new contact to the phonebook up to a total of 8. If the list is full, the oldest contact will be deleted."
						<< std::endl
						<< "SEARCH : Shows the short version of the list and each contact's index. Pick one to see detailed information."
						<< std::endl
						<< "EXIT : Terminates the program and deletes your phonebook. Your contacts will be lost forever!"
						<< std::endl
						<< "Please, enter a command: "
						<< std::endl;
		}
	}

//	PhoneBook testing;
//	testing.AddContact();
//	testing.AddContact();
//	testing.AddContact();
//	testing.ShowContacts();
//	testing.AddContact();
//	testing.AddContact();
//	testing.AddContact();
//	testing.AddContact();
//	testing.AddContact();
//	testing.ShowContacts();
//	testing.AddContact();
//	testing.ShowContacts();

//	Contact testing;
//	std::cout << testing.getFname() << std::endl;
//	std::cout << testing.getLname() << std::endl;
//	std::cout << testing.getNname() << std::endl;
//	std::cout << testing.getPhone() << std::endl;
//	std::cout << testing.getSecret() << std::endl;
//	std::cout << Contact::getInstNbr() << std::endl;
	return 0;
}