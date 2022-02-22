#include "ClapTrap.hpp"

/*--------------------------------*/
/*----------constructors----------*/
/*--------------------------------*/

ClapTrap::ClapTrap(std::string name) : name(name), hitPoint(10), energyPoint(10), attackDamage(0)
{
	std::cout << "New ClapTrap " << name << " constructed" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &other)
{
	std::cout << "New ClapTrap " << other.name << " cloned" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << name << " destroyed" << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->energyPoint -= 1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage " << std::endl;
	}
	else if (this->hitPoint <= 0)
		std::cout << "ClapTrap " << this->name << " can't attack it is dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " not enought energy to attack" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hitPoint)
	{
		std::cout << "ClapTrap " << this->name << " can't take damage it is dead" << std::endl;
		return ;
	}
	this->hitPoint = this->hitPoint > amount ? this->hitPoint - amount : 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " damage! Its health now is " << this->hitPoint << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hitPoint > 0 && this->energyPoint > 0)
	{
		this->energyPoint -= 1;
		this->hitPoint += amount;
		std::cout << "ClapTrap " << this->name << " repaired " << amount << " health points! Its health now is " << this->hitPoint << std::endl;
	}
	else if (this->hitPoint <= 0)
		std::cout << "ClapTrap " << this->name << " can't repaired it is dead" << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " not enought energy to repair" << std::endl;
}

ClapTrap &ClapTrap::operator= (ClapTrap &other)
{
	std::cout << "New ClapTrap " << other.name << " cloned throught =" << std::endl;
	this->attackDamage = other.attackDamage;
	this->energyPoint = other.energyPoint;
	this->hitPoint = other.hitPoint;
	this->name = other.name;
	return (*this);
}