#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	std::cout << "Constructor WrongAnimal by default called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) :  type(type)
{
	std::cout << "Constructor WrongAnimal " << type << " called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src)
{
	std::cout << "Constructor WrongAnimal by copy called" << std::endl;
	*this = src;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

WrongAnimal		&WrongAnimal::operator=(WrongAnimal const &src)
{
	this->type = src.type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return this->type;
}
 
void		WrongAnimal::makeSound() const
{
	std::cout << "Souuuuuuund"<< std::endl;
}