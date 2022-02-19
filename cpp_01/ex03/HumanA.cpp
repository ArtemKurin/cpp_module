#include "HumanA.hpp"

HumanA::HumanA(std::string const &name):
	name(name)
{
}

HumanA::HumanA(std::string const &name, const Weapon &weapon):
	name(name), weapon(&weapon)
{
}

HumanA::~HumanA(void)
{

}

void	HumanA::setWeapon(const Weapon &weapon)
{
	this->weapon = &weapon;
}

void	HumanA::attack()
{
	if (this->weapon)
	std::cout << this->name << " attacks with their " << this->weapon->getType() << std::endl;
}