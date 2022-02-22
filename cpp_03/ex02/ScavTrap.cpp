#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{

}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	std::cout << "New ScavTrap " << name << " constructed" << std::endl;
	this->attackDamage = 20;
	this->energyPoint = 50;
	this->hitPoint = 100;
	this->name = name;
}

ScavTrap::ScavTrap(ScavTrap const &other) : ClapTrap(other)
{
	std::cout << "New ScavTrap " << other.name << " cloned" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << name << " destroyed" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->energyPoint -= 1;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage " << std::endl;
	}
	else if (this->hitPoint <= 0)
		std::cout << "ScavTrap " << this->name << " can't attack it is dead" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " not enought energy to attack" << std::endl;
}

void	 ScavTrap::guardGate()
{
	if (this->hitPoint)
		std::cout << "ScavTrap " << this->name << " guardGate!" << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " can't guard it is dead" << std::endl;
}

ScavTrap 	&ScavTrap::operator= (ScavTrap &other)
{
	std::cout << "New ClapTrap " << other.name << " cloned throught =" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
	return (*this);
}