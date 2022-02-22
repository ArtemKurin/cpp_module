#include "ScavTrap.hpp"

int main(void)
{
	ScavTrap scav("Scav");

	scav.guardGate();
	for(int i = 0; i < 7; i++)
	{
		scav.attack("This BOY");
		scav.takeDamage(23);
		scav.beRepaired(2);
	}
	scav.guardGate();
}