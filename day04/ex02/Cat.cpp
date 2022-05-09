#include "Cat.hpp"


Cat::Cat(void) : Animal("Cat")
{
	_brain = new Brain();
	std::cout << "Constructor Cat by default called" << std::endl;
}

Cat::Cat(std::string type) : Animal(type)
{
	_brain = new Brain();
	std::cout << "Constructor Cat called" << std::endl;
}

Cat::Cat(Cat const &src) : Animal(src)
{
	std::cout << "Constructor Cat by copy called" << std::endl;
	if (&src != this)
	{
		_brain = new Brain();
		*this = src;
	}
}

Cat::~Cat(void)
{
	delete 	_brain;
	std::cout << "Destructor Cat called" << std::endl;
}

Cat		&Cat::operator=(Cat const &src)
{
	std::cout << "Assignation Cat called" << std::endl;
	if (&src != this)
	{
        _brain = new Brain();
        for (int i = 0; i < 100; i++)
            this->_brain->setBrainIdeas(i, src._brain->getBrainIdeas(i));
        this->type = src.type;
	}
	return (*this);
}

void		Cat::makeSound() const
{
	std::cout << "Ouaaaaaf"<< std::endl;
}

Brain		*Cat::getBrain(void) const
{
	return _brain;
}