#include "Contact.hpp"

Contact::Contact(void)
{
//	std::cout << "Contact's constructor called." << std::endl;
	return;
}

void Contact::setAll (void)
{
//Is there a way to make this better?
	std::cout << std::endl;
	std::cout << "New contact's first name: " << std::endl;
	std::cin >> this->_Fname;
	if (std::cin.eof())
		return;
	std::cout << this->_Fname << "'s last name: " << std::endl;
	std::cin >> this->_Lname;
	if (std::cin.eof())
		return;
	std::cout << this->_Fname << "'s nickname: " << std::endl;
	std::cin >> this->_Nname;
	if (std::cin.eof())
		return;
	std::cout << this->_Fname << "'s phone number: " << std::endl;
	std::cin >> this->_Phone;
	if (std::cin.eof())
		return;
	std::cout << this->_Fname << "'s darkest secret: " << std::endl;
	std::cin >> this->_Secret;
	if (std::cin.eof())
		return;
	std::cout << "New contact added!" << std::endl;
	std::cout << std::endl;
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
//	std::cout << "Contact's destructor called" << std::endl;
	return;
}
