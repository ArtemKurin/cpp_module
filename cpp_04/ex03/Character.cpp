#include "Character.hpp"

Character::Character(std::string name) : name(name), equipped(0)
{
	for (int i = 0; i < S_INV; i++)
		this->inventor[i] = NULL;
	std::cout << "(Character)\t\tConstructor" << std::endl;
}

Character::Character(Character const &other) : name(other.name), equipped(other.equipped)
{
	for (int i = 0; i < S_INV; i++)
		this->inventor[i] = NULL;
	for (int i = 0; i < other.equipped; i++)
		this->inventor[i] = this->inventor[i]->clone();
	std::cout << "(Character)\t\tConstructor copy" << std::endl;
}

Character::~Character()
{
	for (int i = 0; i < this->equipped; i++)
		delete (this->inventor[i]);
	std::cout << "(Character)\t\tDestructor" << std::endl;
}

Character	&Character::operator= (Character const &other)
{
	std::cout << "(Character)\t\tOperator =" << std::endl;
	this->name = other.name;
	for (int i = 0; i < this->equipped; i++)
		delete (this->inventor[i]);
	this->equipped = 0;
	for (int i = 0; i < other.equipped; i++)
		this->equip(other.inventor[i]->clone());
	for (int i = other.equipped; i < S_INV; i++)
		this->inventor[i] = NULL;
	return (*this);
}

std::string const &Character::getName(void) const
{
	return (this->name);
}

void	Character::unequip(int idx)
{
	if (idx > -1 && idx < 4 && this->inventor[idx])
	{
		for (int i = idx; i < S_INV - 1; i++)
		{
			this->inventor[i] = this->inventor[i + 1];
			this->inventor[i] = NULL;
		}
		std::cout << "(Character)\t\tUnequip : success" << std::endl;
		this->equipped--;
	}
	else
		std::cout << "(Character)\t\tUnequip : Invalid index" << std::endl;
}

void	Character::equip(AMateria *m)
{
	if (this->equipped < 4)
	{
		if (!m)
		{
			std::cout << "(Character)\t\tMateria does not exist" << std::endl;
			return ;
		}
		std::cout << "(Character)\t\tEquip : success" << std::endl;
		this->inventor[this->equipped] = m;
		this->equipped++;
	}
	else
		std::cout << "(Character)\t\tEquip : Inventor is full" << std::endl;

}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4 && this->inventor[idx])
		this->inventor[idx]->use(target);
	else
		std::cout << "(Character)\t\tUse : Invalid index" << std::endl;
}