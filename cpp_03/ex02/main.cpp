#include "FragTrap.hpp"

int main(void)
{
	FragTrap frag("frag");

	frag.highFivesGuys();
	for(int i = 0; i < 7; i++)
	{
		frag.attack("This BOY");
		frag.takeDamage(23);
		frag.beRepaired(2);
	}
	frag.highFivesGuys();
}