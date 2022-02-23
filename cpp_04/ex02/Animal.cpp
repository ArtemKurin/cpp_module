#include "Animal.hpp"

Animal::Animal() : type("Animal")
{
	this->brain = NULL;
	std::cout << "Constructor\t\t Animal\t\t called" << std::endl;
}

Animal::Animal(Animal const &other)
{
	std::cout << "Constructor copy\t Animal\t\t\t called" << std::endl;
	this->type = other.type;
}

Animal::~Animal()
{
	std::cout << "Destructor\t\t Animal\t\t called" << std::endl;
}

std::string		Animal::getType() const
{
	return (this->type);
}

// Brain	*Animal::getBrain() const
// {
// 	return (this->brain);
// }

// void	Animal::makeSound() const
// {
// 	std::cout << "Make sound : *sount Animal*" << std::endl;
// }

Animal 		&Animal::operator= (const Animal &other)
{
	this->type = other.type;
	return (*this);
}