#include "Ice.Hpp"

Ice::Ice() : AMateria("ice")
{

}

Ice::Ice(Ice const &other)
{
	this->type = other.type;
}

Ice::~Ice()
{

}

Ice &Ice::operator=(Ice const &other)
{
	this->type = other.type;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}