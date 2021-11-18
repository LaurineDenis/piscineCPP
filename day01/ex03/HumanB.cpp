#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	std::cout << this->_name << " is created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << this->_name << " is destroyed" << std::endl;
}

void	HumanB::attack()
{
	std::cout << this->_name << " attacks with his \"" << this->_weapon->getType() << "\"" << std::endl;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	this->_weapon = &weapon;
	std::cout << this->_name << " is equiped with \"" << this->_weapon->getType() << "\" as a weapon" << std::endl;
}