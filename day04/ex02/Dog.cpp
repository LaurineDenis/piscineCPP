#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog")
{
	_brain = new Brain();
	std::cout << "Constructor Dog by default called" << std::endl;
}

Dog::Dog(std::string type) : Animal(type)
{
	_brain = new Brain();
	std::cout << "Constructor Dog called" << std::endl;
}

Dog::Dog(Dog const &src) : Animal(src)
{
	std::cout << "Constructor Dog by copy called" << std::endl;
	if (&src != this)
	{
		_brain = new Brain();
		*this = src;
	}
}

Dog::~Dog(void)
{
	delete 	_brain;
	std::cout << "Destructor Dog called" << std::endl;
}

Dog		&Dog::operator=(Dog const &src)
{
	std::cout << "Assignation Dog called" << std::endl;
	if (&src != this)
	{
        _brain = new Brain();
        for (int i = 0; i < 100; i++)
            this->_brain->setBrainIdeas(i, src._brain->getBrainIdeas(i));
        this->type = src.type;
	}
	return (*this);
}

void		Dog::makeSound() const
{
	std::cout << "Ouaaaaaf"<< std::endl;
}

Brain		*Dog::getBrain(void) const
{
	return _brain;
}