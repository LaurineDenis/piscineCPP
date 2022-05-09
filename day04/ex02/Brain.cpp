#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor Brain by default called" << std::endl;
	for(int i = 0; i < 99 ;i++)
		this->ideas[i] = "i\n";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Constructor Brain by copy called" << std::endl;
	if (&src != this)
	{
		*this = src;
		for(int i = 0; i < 99 ;i++)
			this->ideas[i] = "i\n";
	}
}

Brain::~Brain(void)
{
	std::cout << "Destructor Brain called" << std::endl;
}

Brain		Brain::operator=(Brain const &src)
{
	std::cout << "Assignation Brain called" << std::endl;
	if (this != &src)
		std::copy(src.ideas, src.ideas + 100, this->ideas);
	return (*this);
}

void Brain::setBrainIdeas(int i, std::string n)
{
	this->ideas[i] = n;
}

std::string Brain::getBrainIdeas(int i) const
{
	return (this->ideas[i]);
}