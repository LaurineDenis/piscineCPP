#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	Bob("Bob");
	ScavTrap	Dylan("Dylan");
	FragTrap	Marley("Marley");

	Marley.attack("Dylan");
	Marley.highFivesGuys();
	Dylan.attack("Bob");
	Dylan.guardGate();
	Bob.whoAmI();
	return 0;
}