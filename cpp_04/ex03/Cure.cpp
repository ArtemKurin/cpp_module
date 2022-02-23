#include "Cure.Hpp"

Cure::Cure() : AMateria("cure")
{

}

Cure::Cure(Cure const &other)
{
	this->type = other.type;
}

Cure::~Cure()
{

}

Cure &Cure::operator=(Cure const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* health " << target.getName() << "s wounds *" << std::endl;
}