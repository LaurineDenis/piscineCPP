#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_name = "Default";
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackPoints(20);
	std::cout << "Constructor ScavTrap by default called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) :  ClapTrap(name)
{
	this->_name = name;
	setHitPoints(100);
	setEnergyPoints(50);
	setAttackPoints(20);
	std::cout << "Constructor ScavTrap " << name << " called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
{
	std::cout << "Constructor ScavTrap by copy called" << std::endl;
	*this = src;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "Destructor ScavTrap called" << std::endl;
}

ScavTrap	ScavTrap::operator=(ScavTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dammage = src._attack_dammage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	ClapTrap::attack(target);
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->_name << " have enterred in Gate keeper mode" << std::endl;
}
