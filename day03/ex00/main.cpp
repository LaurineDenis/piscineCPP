#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Bob;
	ClapTrap	Dylan("Dylan");
	ClapTrap	*Marley;

	Marley = new ClapTrap("Marley");
	Marley->attack("Pinguin");
	Marley->takeDamage(120);
	Marley->beRepaired(10);
	delete Marley;
	std::cout << "----------------" << std::endl;
	Marley = &Dylan;
	Dylan.attack("bonjour");
	Dylan.takeDamage(15);
	Dylan.beRepaired(15);
	std::cout << "----------------" << std::endl;
	Marley->attack("bye");
	std::cout << "----------------" << std::endl;
	return 0;
}