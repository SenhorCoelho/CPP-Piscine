#include "Contact.hpp"
#include "PhoneBook.hpp"
//#include <iostream>

int main(void)
{
	PhoneBook	myPhonebook;
	std::string input;

	std::cout	<< "Welcome to your very own crappy awesome 80's phonebook program!"
				<< std::endl
				<< "Here are the commands available to you:"
				<< std::endl
				<< std::endl
				<< "ADD : Adds a new contact to the phonebook up to a total of 8. If the list is full, the oldest contact will be deleted."
				<< std::endl
				<< std::endl
				<< "SEARCH : Shows the short version of the list and each contact's index. Pick one to see detailed information."
				<< std::endl
				<< std::endl
				<< "EXIT : Terminates the program and deletes your phonebook. Your contacts will be lost forever!"
				<< std::endl
				<< std::endl;
	while(!std::cin.eof())
	{
		std::cout << "Please, enter a command: " << std::endl;
		std::cin >> input;
		if (std::cin.eof())
			break;
		if (input.compare("ADD") == 0)
			myPhonebook.AddContact();
		else if (input.compare("SEARCH") == 0)
		{
			//This should show but also expect to get a number for index
			//What if there's a search with no contacts added?
			if (myPhonebook.ShowList())
			{
				std::cout << "Type the Index for the contact you'd like to check." << std::endl;
				std::cin >> input;
				if (std::cin.eof())
					break;
				myPhonebook.ShowContact(input);
			}
		}
		else if (input.compare("EXIT") == 0)
			break;
		else if (!std::cin.eof())
			std::cout << "Command not found." << std::endl;
	}
	return 0;
}
