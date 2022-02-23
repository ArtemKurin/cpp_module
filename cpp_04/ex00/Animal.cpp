#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	std::cout << "Constructor Animal called" << std::endl;
}

Animal::Animal(Animal const &other)
{
	std::cout << "Constructor copy WrongAnimal called" << std::endl;
	this->type = other.type;
}

Animal::~Animal()
{
	std::cout << "Destructor Animal called" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "Make sound : *sount Animal*" << std::endl;
}

Animal 		&Animal::operator= (const Animal &other)
{
	this->type = other.type;
	return (*this);
}