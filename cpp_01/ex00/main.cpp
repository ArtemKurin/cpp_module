#include "Zombie.hpp"

int	main(void)
{
	Zombie *zomb = newZombie("Grigoriy");

	zomb->announce();
	randomChump("Petr");
	delete(zomb);
	return (0);
}