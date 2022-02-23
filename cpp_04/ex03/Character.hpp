#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#define S_INV 4

class Character : public ICharacter
{
	public:
		Character();
		Character(std::string name);
		Character(Character const &other);
		virtual ~Character();
		void	unequip(int idx);
		void	equip(AMateria *m);
		void	use(int idx, ICharacter& target);
		Character	&operator= (Character const &other);
		
	protected:
		AMateria		*inventor[S_INV];
		std::string		name;
		int				equipped;
};

#endif