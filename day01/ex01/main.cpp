#include "Zombie.hpp"

int	main(void)
{
	Zombie*	zombie;

	zombie = zombieHorde(5, "bob");
	for (int i = 0; i < 5; i++)
		zombie->announce();
	delete[] zombie;
	return (0);
}