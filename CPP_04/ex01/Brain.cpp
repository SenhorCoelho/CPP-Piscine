#include "Brain.hpp"

//Constructor
Brain::Brain(void) : _tIdeas(0)
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
	this->_tIdeas = src._tIdeas;
	for(int i = 0; i < 100; i++)
		this->ideas[i] = src.ideas[i];
	return *this;
}

Brain::~Brain(void)
{
	return;
}

void Brain::setIdea(std::string idea)
{
	if (_tIdeas == 100)
		_tIdeas = 0;
	ideas[_tIdeas] = idea;
	_tIdeas++;
	return;
}

void Brain::showIdeas(void)
{
	for (int i = 0; i <= (_tIdeas - 1); i++)
		std::cout << ideas[i] << std::endl;
	return;
}