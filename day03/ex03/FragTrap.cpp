#include "FragTrap.hpp"

int FragTrap::hitPointsInit = 100;
int FragTrap::energyPointsInit = 100;
int FragTrap::attackDamageInit = 30;

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "Default";
	setAttack_dammage(30);
	setEnergyPoints(100);
	setHitPoints(100);
	std::cout << "Constructor FragTrap by default called" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
	this->_name = name;
	setAttack_dammage(30);
	setEnergyPoints(100);
	setHitPoints(100);
	std::cout << "Constructor FragTrap " << name << " called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
{
	std::cout << "Constructor FragTrap by copy called" << std::endl;
	*this = src;
}

FragTrap::~FragTrap(void)
{
	std::cout << "Destructor FragTrap called" << std::endl;
}

FragTrap	&FragTrap::operator=(FragTrap const &src)
{
	this->_name = src._name;
	this->_energy_points = src._energy_points;
	this->_attack_dammage = src._attack_dammage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "Fragtrap " << this->_name << " attack " << target << ", causing " << this->_hit_points << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap high five !" << std::endl;
}
