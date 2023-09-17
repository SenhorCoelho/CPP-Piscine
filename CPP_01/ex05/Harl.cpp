#include "Harl.hpp"

//Constructor
Harl::Harl(void)
{
	return;
}

//Destructor
Harl::~Harl(void)
{
	return;
}

//ADD THE NAME OF EACH LEVEL BEFORE THE SENTENCES
void Harl::debug(void)
{
	std::cout	<< "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-"
				<< "ketchup burger. I really do!" 
				<< std::endl;
	return;
}

void Harl::info(void)
{
	std::cout	<< "I cannot believe adding extra bacon costs more money. You didn't put"
				<< "enough bacon in my burger! If you did, I wouldn't be asking for more!"
				<< std::endl;
	return;
}

void Harl::warning(void)
{
	std::cout	<< "I think I deserve to have some extra bacon for free. I've been coming for"
				<< "years whereas you started working here since last month."
				<< std::endl;
	return;
}

void Harl::error(void)
{
	std::cout	<< "This is unacceptable! I want to speak to the manager now." << std::endl;
	return;
}

void Harl::complain(std::string level)
{
	int index = 0;

	void (Harl::*f[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for(std::string::iterator i=level.begin(); i!=level.end(); i++)
			*i = toupper(*i);
	
	while(index < 4)
	{
		while(levels[index] == level)
		{
			(this->*f[index])();
			break;
		}
		index++;
	}
	return;
}

