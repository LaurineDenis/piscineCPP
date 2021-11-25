#include "Cat.hpp"

Cat::Cat(void)
{
	std::cout << "Constructor Cat by default called" << std::endl;
	brain = new Brain;
}

Cat::Cat(std::string type)
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = type;
	brain = new Brain;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Constructor Cat by copy called" << std::endl;
	brain = new Brain;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete brain;
}

Cat			&Cat::operator=(Cat const &src)
{
	std::cout << "Assignation Cat called" << std::endl;
	if (this != &src)
	{
		this->type = src.type;
		this->brain = src.brain;
	}
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "Miaouuuuuu"<< std::endl;
}