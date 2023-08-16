#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>

int main(void)
{
	PhoneBook	myPhonebook;
	std::string input;

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
	while(!std::cin.eof())
	{
		std::cout << "Please, enter a command: " << std::endl;
		std::cin >> input;
	//Treat the eof cin for everywhere I added a cin
		if (input.compare("ADD") == 0)
			myPhonebook.AddContact();
		else if (input.compare("SEARCH") == 0)
		{
			//This should show but also expect to get a number for index
			//What if there's a search with no contacts added?
			myPhonebook.ShowList();
			std::cout << "Type the Index for the contact you'd like to check." << std::endl;
			std::cin >> input;
			myPhonebook.ShowContact(input);
		}
		else if (input.compare("EXIT") == 0)
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



//static int	msh_is_overflow(char *arg)
//{
//	char	*lint;
//	char	*str;
//
//	str = arg;
//	lint = "9223372036854775807";
//	if (*str == '-' || *str == '+')
//		if (*str++ == '-')
//			lint = "9223372036854775808";
//	while (*str == '0')
//		str++;
//	//Enter if they differ in size:
//	//If our string received is longer than lint, it overflowed, return 1 for error.
//	//If our string is shorter than lint, it won't overflow, return 0 for success.
//	if (ft_strlen(str) != ft_strlen(lint))
//		return (ft_strlen(str) > ft_strlen(lint));
//	//The only case left, that we wanna treat below, are strings of the same length
//	while (*str <= *lint)
//	{
//		str++;
//		lint++;
//	}
//	if (*str == '\0')
//		return (0);
//	return (1);
//}
//
//987654321 - limit
//987644321 - string