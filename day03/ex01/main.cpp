#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap	Bob("Bob");
	ScavTrap	Dylan("Dylan");

	Bob.attack("Dylan");
	Bob.takeDamage(15);
	Bob.beRepaired(15);
	Dylan.attack("Bob");
	Dylan.takeDamage(15);
	Dylan.beRepaired(15);
	Dylan.guardGate();
	return 0;
}