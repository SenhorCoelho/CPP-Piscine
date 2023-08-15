#include <iostream>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void) : _NbCon (0)
{
	std::cout << "Dale!" << std::endl;
//	this->_ConLis[0].setAll();
//	std::cout << this->_ConLis[0].getFname() << std::endl;
//	std::cout << this->_ConLis[0].getLname() << std::endl;
//	std::cout << this->_ConLis[0].getNname() << std::endl;
//	std::cout << this->_ConLis[0].getPhone() << std::endl;
//	std::cout << this->_ConLis[0].getSecret() << std::endl;
//	this->_ConLis[1].setAll();
//	std::cout << this->_ConLis[1].getFname() << std::endl;
//	std::cout << this->_ConLis[1].getLname() << std::endl;
//	std::cout << this->_ConLis[1].getNname() << std::endl;
//	std::cout << this->_ConLis[1].getPhone() << std::endl;
//	std::cout << this->_ConLis[1].getSecret() << std::endl;
//	this->_ConLis[0] = this->_ConLis[1];
//	std::cout << this->_ConLis[0].getFname() << std::endl;
//	std::cout << this->_ConLis[0].getLname() << std::endl;
//	std::cout << this->_ConLis[0].getNname() << std::endl;
//	std::cout << this->_ConLis[0].getPhone() << std::endl;
//	std::cout << this->_ConLis[0].getSecret() << std::endl;
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

void PhoneBook::ShowContacts(void)
{
//	for (int i = 0; i < this->_NbCon; i++)
//	{
//		std::cout << this->_ConLis[i].getFname() << " ";
//		std::cout << this->_ConLis[i].getLname() << " ";
//		std::cout << this->_ConLis[i].getNname() << " ";
//		std::cout << this->_ConLis[i].getPhone() << " ";
//		std::cout << this->_ConLis[i].getSecret() << std::endl;
//	}

//Ask thawan for help in creating a function that gets a pointer to function as argument and executes it multiple times;
	
	std::cout << "|";
	CELL std::cout << std::right << "Index";
	std::cout << "|";
	CELL std::cout << std::right <<  "First Name";
	std::cout << "|";
	CELL std::cout << std::right << "Last Name";
	std::cout << "|";
	CELL std::cout << std::right << "Nickname";
	std::cout << "|" << std::endl;
	for (int i = 0; i < this->_NbCon; i++)
	{
		std::cout << "|";
		CELL std::cout << std::right << i << "|";

		//To fix the issue, the cell for long names should be 9 characters only.
		CELL
		if ((this->_ConLis[i].getFname()).size() > 11)
			std::cout << std::right << (this->_ConLis[i].getFname()).substr (0, 9) << ".";
		else
			std::cout << std::right << this->_ConLis[i].getFname();
		std::cout << "|";
		CELL
		if ((this->_ConLis[i].getLname()).size() > 11)
			std::cout << std::right << (this->_ConLis[i].getLname()).substr (0, 9) << ".";
		else
			std::cout << std::right << this->_ConLis[i].getLname();
		std::cout << "|";
		CELL
		if ((this->_ConLis[i].getNname()).size() > 11)
			std::cout << std::right << (this->_ConLis[i].getNname()).substr (0, 9) << ".";
		else
			std::cout << std::right << this->_ConLis[i].getNname();
		std::cout << "|" << std::endl;
	}
	return;
}

PhoneBook::~PhoneBook(void)
{
	std::cout << "Cabou!" << std::endl;
	return;
}