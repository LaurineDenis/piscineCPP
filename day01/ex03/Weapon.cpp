#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon()
{
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
	std::cout << "Weapon \"" << this->getType() << "\" is equiped" << std::endl;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}