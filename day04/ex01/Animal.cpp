#include "Animal.hpp"

Animal::Animal(void) : type("Animal")
{
	std::cout << "Constructor Animal by default called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "Constructor Animal " << type << " called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	std::cout << "Copy Constructor Animal by copy called" << std::endl;
	if (&src != this)
		*this = src;
}

Animal::~Animal(void)
{
	std::cout << "Destructor Animal called" << std::endl;
}

Animal		&Animal::operator=(Animal const &src)
{
	std::cout << "Assignation Animal called" << std::endl;
	if (this != &src)
		this->type = src.type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return this->type;
}
 
void		Animal::makeSound() const
{
	std::cout << "Souuuuuuund"<< std::endl;
}