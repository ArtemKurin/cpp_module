#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	for (int i = 0; i < S_INV; i++)
		this->materias[i] = NULL;
	this->count = 0;
	std::cout << "(MateriaSource)\t\tConstructor" << std::endl;
}

MateriaSource::MateriaSource(MateriaSource const &other)
{
	this->count = other.count;
	for (int i = 0; i < S_INV; i++)
		this->materias[i] = NULL;
	for (int i = 0; i < other.count; i++)
		this->learnMateria(other.materias[i]->clone());
	std::cout << "(MateriaSource)\t\tConstructor copy" << std::endl;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < S_INV && this->materias[i]; i++)
		delete (this->materias[i]);
	std::cout << "(MateriaSource)\t\tDestructor" << std::endl;
}

void MateriaSource::learnMateria(AMateria *m)
{
	if (this->count < 4 && m)
	{
		for (int i = 0; i < S_INV; i++)
		{
			if (m == this->materias[i])
			{
				std::cout << "(MateriaSource)\t\tLearnMateria : this matter is already studied" << std::endl;
				return ;
			}
		}
		this->materias[this->count++] = m;
	}
	else if (!m)
		std::cout << "(MateriaSource)\t\tLearnMateria : matter does not exist" << std::endl;
	else
		std::cout << "(MateriaSource)\t\tLearnMateria : invalid index" << std::endl;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	std::cout << "(MateriaSource)\t\tCreateMateria" << std::endl;
	for (int i = 0; i < this->count; i++)
		if (this->materias[i]->getType() == type)
			return (this->materias[i]->clone());
	return (NULL);
}