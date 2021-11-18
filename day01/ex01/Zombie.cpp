#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
	this->_name = new_name;
}

Zombie::Zombie(void)
{}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " was destroyed" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->_name << " BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
}