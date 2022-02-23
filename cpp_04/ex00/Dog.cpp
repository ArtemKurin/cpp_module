#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Constructor " << this->type << " called" << std::endl;
}

Dog::Dog(Dog const &other)
{
	std::cout << "Constructor copy " << this->type << " called" << std::endl;
	this->type = other.type;
}

Dog::~Dog()
{
	std::cout << "Destructor " << this->type << " called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Make sound " << this->type << " : GAV" << std::endl;
}

Dog 		&Dog::operator= (const Dog &other)
{
	this->type = other.type;
	return (*this);
}