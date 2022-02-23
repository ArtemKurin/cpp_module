#include "AMateria.hpp"

AMateria::AMateria() : type("")
{

}

AMateria::AMateria(std::string const &type) : type(type)
{

}

AMateria::~AMateria()
{

}

std::string const &AMateria::getType() const
{
	return (this->type);
}