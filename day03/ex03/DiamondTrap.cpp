#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap()
{
	this->_name = "Default";
	this->_hit_points = FragTrap::hitPointsInit; 
	this->_energy_points = ScavTrap::energyPointsInit;
	this->_attack_dammage = FragTrap::attackDamageInit;
	std::cout << "Energy " << this->_energy_points << " called" << std::endl;
	std::cout << "Dammage " << this->_attack_dammage << " called" << std::endl;
	std::cout << "Constructor DiamondTrap by default called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name + "_frag_name"), ScavTrap(name + "_scav_name")
{
	this->_name = name;
	this->_hit_points = FragTrap::hitPointsInit; 
	this->_energy_points = ScavTrap::energyPointsInit;
	this->_attack_dammage = FragTrap::attackDamageInit;
	std::cout << "Energy " << this->_energy_points << " called" << std::endl;
	std::cout << "Dammage " << this->_attack_dammage << " called" << std::endl;
	std::cout << "Constructor DiamondTrap " << name << " called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
{
	std::cout << "Constructor DiamondTrap by copy called" << std::endl;
	*this = src;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "Destructor DiamondTrap called" << std::endl;
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &src)
{
	this->_name = src._name;
	return (*this);
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI(void)
{
	std::cout << "My name is " << this->_name << " and ClapTraps name is " << ClapTrap::_name << std::endl;
}