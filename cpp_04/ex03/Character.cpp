#include "Character.hpp"

Character::Character()
{

}

Character::Character(std::string name) : name(name), equipped(0)
{
	for (int i = 0; i < S_INV; i++)
		this->inventor[i] = NULL;
}

Character::Character(Character const &other)
{

}

Character::~Character()
{

}

Character	&Character::operator= (Character const &other)
{

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
		this->equipped--;
	}
	else
		std::cout << "Invalid index" << std::endl;
}

void	Character::equip(AMateria *m)
{
	if (this->equipped < 4)
	{
		if (!m)
		{
			std::cout << "Materia does not exist" << std::endl;
			return ;
		}
		this->inventor[this->equipped] = m;
		this->equipped++;
	}
	else
		std::cout << "Inventor is full" << std::endl;

}

void	Character::use(int idx, ICharacter& target)
{
	if (idx > -1 && idx < 4)
	{
		
	}
}