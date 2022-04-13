#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	brain = new Brain();
	std::cout << "Constructor Dog by default called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	brain = new Brain();
	std::cout << "Constructor Dog by copy called" << std::endl;
	*this = src;
}

Dog::~Dog(void)
{
	delete 	brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog		&Dog::operator=(Dog const &src)
{
	this->type = src.type;
	this->brain = src.brain;
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "Ouaaaaaf"<< std::endl;
}