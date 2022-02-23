#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal")
{
	std::cout << "Constructor WrongAnimal called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &other)
{
	std::cout << "Constructor copy WrongAnimal called" << std::endl;
	this->type = other.type;
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "Destructor WrongAnimal called" << std::endl;
}

std::string		WrongAnimal::getType() const
{
	return (this->type);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Make sound WrongAnimal : *sound WrongAnimal*" << std::endl;
}

WrongAnimal 		&WrongAnimal::operator= (const WrongAnimal &other)
{
	this->type = other.type;
	return (*this);
}