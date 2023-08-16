#include <iostream>
#include "PhoneBook.hpp"

//Auxiliary Functions
static void PrintHeader(void);
static void PrintLine(std::string str);
static int	CheckDigits(std::string str);
static int	CheckOverflow(std::string str);

PhoneBook::PhoneBook(void) : _NbCon (0)
{
	std::cout << "Dale!" << std::endl;
	return;
}

//Called for the ADD option.
void PhoneBook::AddContact(void)
{
	if (_NbCon == SIZE)
	{
		_NbCon -= 1;
		for (int i = 0; i < (SIZE - 1); i++)
			this->_ConLis[i] = this->_ConLis[i + 1];
	}
	this->_ConLis[this->_NbCon].setAll();
	if (this->_NbCon < SIZE)
		this->_NbCon += 1;
	return;
}

//Show the list of contacts in a table format
void PhoneBook::ShowList(void) const
{
	if (this->_NbCon == 0)
	{
		std::cout << "There are no contacts to be shown." << std::endl;
		return;
	}	
	PrintHeader();
	for (int i = 0; i < this->_NbCon; i++)
	{
		std::cout << "|";
		std::cout.width(10); std::cout << std::right << (i + 1) << "|";
		PrintLine(this->_ConLis[i].getFname());
		PrintLine(this->_ConLis[i].getLname());
		PrintLine(this->_ConLis[i].getNname());
		std::cout << std::endl;
	}
	return;
}

void	PhoneBook::ShowContact(std::string str) const
{
	int i;
	if (CheckDigits(str) || CheckOverflow(str))
	{
		std::cout << "Invalid Input." << std::endl;
		return;
	}
	i = std::atoi(str.c_str());
	i -= 1;
	if ( i < 0 || i > this->_NbCon || i == SIZE)
	{
		std::cout << "Index out of range." << std::endl;
		return;
	}	
	std::cout << "First Name: " << this->_ConLis[i].getFname() << std::endl;
	std::cout << "Last Name: " << this->_ConLis[i].getLname() << std::endl;
	std::cout << "Nickname: " << this->_ConLis[i].getNname() << std::endl;
	std::cout << "Phone Number: " << this->_ConLis[i].getPhone() << std::endl;
	std::cout << "Darkest Secret: " << this->_ConLis[i].getSecret() << std::endl;
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Cabou!" << std::endl;
	return;
}

static void PrintHeader(void)
{
	std::cout << std::right << "|";
	std::cout.width(10);
	std::cout << "Index" << "|";
	std::cout.width(10);
	std::cout <<  "First Name" << "|";
	std::cout.width(10);
	std::cout << "Last Name" << "|";
	std::cout.width(10);
	std::cout << "Nickname" << "|" << std::endl;
}

static void PrintLine(std::string str)
{
	std::cout << std::right;
	if (str.size() > 11)
	{
		std::cout.width(9);
		std::cout << str.substr (0, 9) << ".";
	}
	else
	{
		std::cout.width(10);
		std::cout << str;
	}
	std::cout << "|";
}

static int CheckDigits(std::string str)
{
	int i;

	i = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i + 1] != '\0')
			i++;
		else
			return (1);
	}
	while(str[i])
	{
		if (isdigit(str[i]))
			i++;
		else
			return (1);
	}
	return (0);
}

static int	CheckOverflow(std::string str)
{
	const char	*cstr;
	std::string mint;

	cstr = str.c_str();
	mint = "2147483647";
	if (*cstr == '-' || *cstr == '+')
		if (*cstr++ == '-')
			mint = "2147483648";
	while (*cstr == '0')
		cstr++;
	//Enter if they differ in size:
	//If our string received is longer than lint, it overflowed, return 1 for error.
	//If our string is shorter than lint, it won't overflow, return 0 for success.
	if (strlen(cstr) != mint.length())
		return (strlen(cstr) > mint.length());
	//The only case left, that we wanna treat below, are strings of the same length
	for (int i = 0; cstr[i] != '\0'; i++)
		if (cstr[i] > mint[i])
			return (1);
	return (0);
}