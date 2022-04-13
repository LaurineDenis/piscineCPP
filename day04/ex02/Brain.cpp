#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Constructor Brain by default called" << std::endl;
	for(int i = 0; i < 99 ;i++)
		this->ideas[i] = "\0";
}

Brain::Brain(Brain const &src)
{
	std::cout << "Constructor Brain by copy called" << std::endl;
	for(int i = 0; i < 99 ;i++)
		this->ideas[i] = "\0";
	*this = src;
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
