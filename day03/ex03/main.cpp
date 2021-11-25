#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	Bob("Bob");
	// ScavTrap	Dylan("Dylan");
	// FragTrap	Marley("Marley");

	// Marley.attack("Dylan");
	// Marley.highFivesGuys();
	// Dylan.attack("Bob");
	// Dylan.guardGate();
	Bob.attack("Dylan");
	Bob.takeDamage(10);
	Bob.beRepaired(10);
	Bob.highFivesGuys();
	Bob.guardGate();
	Bob.whoAmI();
	return 0;
}