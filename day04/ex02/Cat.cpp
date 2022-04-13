#include "Cat.hpp"

Cat::Cat(void): Animal("Cat")
{
	std::cout << "Constructor Cat by default called" << std::endl;
	_brain = new Brain();
}

Cat::Cat(std::string type): Animal(type)
{
	std::cout << "Constructor Cat called" << std::endl;
	this->type = type;
	_brain = new Brain();
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Constructor Cat by copy called" << std::endl;
	*this = src;
}

Cat::~Cat(void)
{
	std::cout << "Destructor Cat called" << std::endl;
	delete _brain;
}

Cat			&Cat::operator=(Cat const &src)
{
	std::cout << "Assignation Cat called" << std::endl;
    if (this != &src)
    {
        _brain = new Brain;
        this->type = src.type;
    }
    return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "Miaouuuuuu"<< std::endl;
}
