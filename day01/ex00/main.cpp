#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = newZombie("bob");
	zombie->announce();
	delete zombie;
	randomChump("dylan");
	return (0);
}