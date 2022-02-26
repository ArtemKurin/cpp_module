#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
# ifndef S_INV
#  define S_INV 4
# endif

class Character : public ICharacter
{
	public:
		Character(std::string name);
		Character(Character const &other);
		virtual ~Character();
		void	unequip(int idx);
		void	equip(AMateria *m);
		void	use(int idx, ICharacter& target);
		std::string const &getName(void) const;
		Character	&operator= (Character const &other);
		
	protected:
		AMateria		*inventor[S_INV];
		std::string		name;
		int				equipped;
};

#endif