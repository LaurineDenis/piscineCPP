#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_name = "Default";
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dammage = 30;
	std::cout << "Constructor FragTrap by default called" << std::endl;
}

FragTrap::FragTrap(std::string name) :  ClapTrap(name)
{
	this->_name = name;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_dammage = 30;
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

FragTrap	FragTrap::operator=(FragTrap const &src)
{
	this->_name = src._name;
	this->_hit_points = src._hit_points;
	this->_energy_points = src._energy_points;
	this->_attack_dammage = src._attack_dammage;
	return (*this);
}

void	FragTrap::attack(std::string const &target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << ", causing " << this->_hit_points << " points of damage!" << std::endl;
}

void	FragTrap::takeDamage(unsigned int amount)
{
	this->_energy_points -= amount;
	std::cout << "FragTrap " << this->_name << " take " << amount << " points of damage!" << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount)
{
	this->_energy_points += amount;
	std::cout << "FragTrap " << this->_name << " is repaired with " << amount << " points!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap high five !" << std::endl;
}
