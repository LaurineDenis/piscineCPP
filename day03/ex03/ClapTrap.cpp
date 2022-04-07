#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("Default"), _hit_points(10), _energy_points(10), _attack_dammage(0)
{
	std::cout << "Constructor ClapTrap by default called" << std::endl;
}

ClapTrap::ClapTrap(std::string name) :  _name(name), _hit_points(10), _energy_points(10), _attack_dammage(0)
{
	std::cout << "Constructor ClapTrap " << _name << " called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	std::cout << "Constructor ClapTrap by copy called" << std::endl;
	*this = src;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destructor ClapTrap called" << std::endl;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dammage = src._attack_dammage;
	return (*this);
}

void	ClapTrap::attack(std::string const &target)
{
	std::cout << "ClapTrap " << this->_name << " attack " << target << ", causing " << this->_hit_points << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->_energy_points -= amount;
	std::cout << "ClapTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	this->_energy_points += amount;
	std::cout << "ClapTrap " << this->_name << " is repaired with " << amount << " points!" << std::endl;
}

void	ClapTrap::setHitPoints(int point)
{
	this->_hit_points = point;
}

void	ClapTrap::setEnergyPoints(int point)
{
	this->_energy_points = point;
}

void	ClapTrap::setAttack_dammage(int point)
{
	this->_attack_dammage = point;
}

int		ClapTrap::getHitPoints(void)
{
	return (this->_hit_points);
}

int		ClapTrap::getEnergyPoints(void)
{
	return (this->_energy_points);
}

int		ClapTrap::getAttackPoints(void)
{
	return (this->_attack_dammage);
}