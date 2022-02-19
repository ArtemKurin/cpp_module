#include "Weapon.hpp"

Weapon::Weapon(void)
{

}

Weapon::Weapon(std::string n_type)
{
	this->type = n_type;
}

Weapon::~Weapon(void)
{

}

std::string	Weapon::getType(void) const
{
	return (this->type);
}

void	Weapon::setType(std::string const &n_type)
{
	this->type = n_type;
}