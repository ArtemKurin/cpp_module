#include "DiamondTrap.hpp"
//const other
DiamondTrap::DiamondTrap()
{

}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name)
{
	std::cout << "New DiamondTrap " << name << " constructed" << std::endl;
	this->attackDamage = FragTrap::attackDamage;
	this->energyPoint = ScavTrap::energyPoint;
	this->hitPoint = FragTrap::hitPoint;
	this->name = name;
}

DiamondTrap::DiamondTrap(DiamondTrap const &other) : ClapTrap(other), FragTrap(other), ScavTrap(other)
{
	this->attackDamage = FragTrap::attackDamage;
	this->energyPoint = ScavTrap::energyPoint;
	this->hitPoint = FragTrap::hitPoint;
	this->name = name;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap " << name << " destroyed" << std::endl;
}

DiamondTrap	&DiamondTrap::operator= (DiamondTrap &other)
{
	std::cout << "New DiamondTrap " << other.name << " cloned throught =" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
	return (*this);
}

void	DiamondTrap::attack(std::string &target)
{
	ScavTrap::attack(target);
}

void		DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap "<< this->name << " : seems i'm " << this->name << " trap... or " << this->ClapTrap::name << std::endl;
}