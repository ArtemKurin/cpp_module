#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Constructor\t\t " << this->type << "\t\t called" << std::endl;
}

Dog::Dog(Dog const &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.getBrain());
	std::cout << "Constructor copy\t " << this->type << "\t\t called" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Destructor\t\t " << this->type << "\t\t called" << std::endl;
	delete this->brain;
}

Brain	*Dog::getBrain() const
{
	return (this->brain);
}

void	Dog::makeSound() const
{
	std::cout << "Make sound\t\t "  << this->type << "\t\t : GAV-GAV" << std::endl;
}

Dog 		&Dog::operator= (const Dog &other)
{
	this->type = other.type;
	delete (this->brain);
	this->brain = new Brain(*other.getBrain());
	std::cout << "Operator =\t\t " << this->type << "\t\t called" << std::endl;
	return (*this);
}