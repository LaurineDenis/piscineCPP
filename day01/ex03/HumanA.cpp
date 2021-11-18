#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon): _weapon(weapon)
{
	this->_name = name;
	std::cout << this->_name << " is created with \"" << this->_weapon.getType() << "\" as a weapon"<< std::endl;
}

HumanA::~HumanA()
{
	std::cout << this->_name << " is destroyed" << std::endl;
}

void	HumanA::attack()
{
	std::cout << this->_name << " attacks with his \"" << this->_weapon.getType() << "\"" << std::endl;
}