#include "Brain.hpp"

//Constructor
Brain::Brain(void)
{
	return;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	return;
}

Brain &Brain::operator=(Brain const &src)
{
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	return;
}

