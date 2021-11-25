#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	std::cout << "Constructor Dog by default called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(Dog const &src)
{
	std::cout << "Constructor Dog by copy called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	std::cout << "Destructor Dog called" << std::endl;
}

Dog	&Dog::operator=(Dog const &src)
{
	this->type = src.type;
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "Ouaaaaaf"<< std::endl;
}