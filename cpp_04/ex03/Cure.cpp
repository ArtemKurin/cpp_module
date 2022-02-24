#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "(Cure)\t\t\tConstructor" << std::endl;
}

Cure::Cure(Cure const &other)
{
	this->type = other.type;
	std::cout << "(Cure)\t\t\tConstructor copy" << std::endl;
}

Cure::~Cure()
{
	std::cout << "(Cure)\t\t\tDestructor" << std::endl;

}

Cure &Cure::operator=(Cure const &other)
{
	std::cout << "(Cure)\t\t\tOperator =" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria *Cure::clone(void) const
{
	std::cout << "(Cure)\t\t\tClone" << std::endl;
	return (new Cure());
}

void Cure::use(ICharacter &target)
{
	std::cout << "* health " << target.getName() << "s wounds *" << std::endl;
}