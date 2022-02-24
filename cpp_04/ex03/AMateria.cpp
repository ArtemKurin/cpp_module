#include "AMateria.hpp"

AMateria::AMateria() : type("")
{
	std::cout << "(AMateria)\t\tConstructor" << std::endl;
}

AMateria::AMateria(std::string const &type) : type(type)
{
	std::cout << "(AMateria)\t\tConstructor copy" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "(AMateria)\t\tDestructor" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{
	std::cout << "(AMateria)\t\tUse : " << this->type << " casts into " << target.getName() << std::endl;
}