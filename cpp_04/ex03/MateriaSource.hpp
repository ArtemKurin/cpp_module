#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"

#define S_INV 4

class MateriaSource : public IMateriaSource
{
	public:
		MateriaSource();
		MateriaSource(MateriaSource const &other);
		~MateriaSource();

		void learnMateria(AMateria *m);
		AMateria* createMateria(std::string const & type);

	private:
		AMateria		*materias[S_INV];
		int				count;
};

#endif