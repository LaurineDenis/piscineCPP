#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat")
{
	std::cout << "Constructor Cat by default called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const &src)
{
	std::cout << "Constructor Cat by copy called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
}

Cat	&Cat::operator=(Cat const &src)
{
	this->type = src.type;
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "Miaouuuuuu"<< std::endl;
}