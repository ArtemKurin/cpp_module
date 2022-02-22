#include "FragTrap.hpp"

FragTrap::FragTrap()
{
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "New FragTrap " << name << " constructed" << std::endl;
	this->attackDamage = 30;
	this->energyPoint = 100;
	this->hitPoint = 100;
	this->name = name;
}

FragTrap::FragTrap(FragTrap const &other) : ClapTrap(other)
{
	std::cout << "New FragTrap " << other.name << " cloned" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << name << " destroyed" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "High fives" << std::endl;
}

FragTrap	&FragTrap::operator= (FragTrap &other)
{
	std::cout << "New FragTrap " << other.name << " cloned throught =" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
	return (*this);
}