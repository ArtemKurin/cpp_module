#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "(Ice)\t\t\tConstructor" << std::endl;
}

Ice::Ice(Ice const &other)
{
	this->type = other.type;
	std::cout << "(Ice)\t\t\tConstructor copy" << std::endl;
}

Ice::~Ice()
{
	std::cout << "(Ice)\t\t\tDestructor" << std::endl;
}

Ice &Ice::operator=(Ice const &other)
{
	std::cout << "(Ice)\t\t\tOperator =" << std::endl;
	this->type = other.type;
	return (*this);
}

AMateria *Ice::clone(void) const
{
	std::cout << "(Ice)\t\t\tClone" << std::endl;
	return (new Ice());
}

void Ice::use(ICharacter &target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}