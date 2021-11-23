#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	FragTrap	Bob("Bob");
	ScavTrap	Dylan("Dylan");

	Bob.attack("Dylan");
	Bob.takeDamage(15);
	Bob.beRepaired(15);
	Bob.highFivesGuys();
	Dylan.attack("Bob");
	Dylan.takeDamage(15);
	Dylan.beRepaired(15);
	Dylan.guardGate();
	return 0;
}