#include <iostream>
#include "Contact.hpp"

Contact::Contact(void)
{
//	std::cout << "Constructor Called" << std::endl;
//	std::cout << "New contact's first name: " << std::endl;
//	std::cin >> this->_Fname;
////	not sure if I'm supposed to use cin but it apparently protects against empty fields
////	std::cout << "Your name is: " << this->_Fname << std::endl;
//	std::cout << this->_Fname << "'s last name: " << std::endl;
//	std::cin >> this->_Lname;
//	std::cout << this->_Fname << "'s nickname: " << std::endl;
//	std::cin >> this->_Nname;
//	std::cout << this->_Fname << "'s phone number: " << std::endl;
//	std::cin >> this->_Phone;
//	std::cout << this->_Fname << "'s darkest secret: " << std::endl;
//	std::cin >> this->_Secret;
//	std::cout << "Your name is: " << this->_Fname.size() << " Characters long." << std::endl;
//	std::cout	<< "First name: "
//				<< _Fname
//				<< " Last Name: "
//				<< _Lname
//				<< " Nickname: "
//				<< _Nname
//				<< " Phone number: "
//				<< _Phone
//				<< " Darkest Secret: "
//				<< _Secret
//				<< std::endl;
//	std::cout << "New contact added!" << std::endl;
//	Contact::_InstNbr += 1;
	return;
}

void Contact::setAll (void)
{
	std::cout << "New contact's first name: " << std::endl;
	std::cin >> this->_Fname;
	std::cout << this->_Fname << "'s last name: " << std::endl;
	std::cin >> this->_Lname;
	std::cout << this->_Fname << "'s nickname: " << std::endl;
	std::cin >> this->_Nname;
	std::cout << this->_Fname << "'s phone number: " << std::endl;
	std::cin >> this->_Phone;
	std::cout << this->_Fname << "'s darkest secret: " << std::endl;
	std::cin >> this->_Secret;
	std::cout << "New contact added!" << std::endl;
	return;
}

std::string Contact::getFname (void) const
{
	return this->_Fname;
}

std::string Contact::getLname (void) const
{
	return this->_Lname;
}

std::string Contact::getNname (void) const
{
	return this->_Nname;
}

std::string Contact::getPhone (void) const
{
	return this->_Phone;
}

std::string Contact::getSecret (void) const
{
	return this->_Secret;
}

Contact::~Contact(void)
{
	std::cout << "Destructor Called" << std::endl;
	return;
}