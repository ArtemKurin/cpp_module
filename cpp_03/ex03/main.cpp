#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap diamond("diamond");

	diamond.highFivesGuys();
	for(int i = 0; i < 110; i++)
	{
		diamond.attack("This BOY");
		diamond.takeDamage(0);
		diamond.beRepaired(2);
	}
	diamond.highFivesGuys();
}