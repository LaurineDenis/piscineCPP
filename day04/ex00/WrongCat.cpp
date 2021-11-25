#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat")
{
	std::cout << "Constructor WrongCat by default called" << std::endl;
}

WrongCat::WrongCat(std::string type) : WrongAnimal(type)
{
	std::cout << "Constructor WrongCat called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &src)
{
	std::cout << "Constructor WrongCat by copy called" << std::endl;
	*this = src;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Destructor WrongCat called" << std::endl;
}

WrongCat	WrongCat::operator=(WrongCat const &src)
{
	this->type = src.type;
	return (*this);
}

void		WrongCat::makeSound() const
{
	std::cout << "Miaouuuuuu !"<< std::endl;
}