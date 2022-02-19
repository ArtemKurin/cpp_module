#include "Zombie.hpp"

int	main(void)
{
	Zombie	*hord = zombieHorde(10, "Oleg");

	for(int i = 0; i < 10; i++)
		hord[i].announce();
	delete[] (hord);
	return (0);
}