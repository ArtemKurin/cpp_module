#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Constructor\t\t " << this->type << "\t\t called" << std::endl;
}

Cat::Cat(Cat const &other)
{
	this->type = other.type;
	this->brain = new Brain(*other.getBrain());
	std::cout << "Constructor copy\t " << this->type << "\t\t called" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Destructor\t\t " << this->type << "\t\t called" << std::endl;
	delete this->brain;
}

Brain	*Cat::getBrain() const
{
	return (this->brain);
}

void	Cat::makeSound() const
{
	std::cout << "Make sound\t\t "  << this->type << "\t\t : MEOW-MEOW" << std::endl;
}

Cat 		&Cat::operator= (const Cat &other)
{
	this->type = other.type;
	delete (this->brain);
	this->brain = new Brain(*other.getBrain());
	std::cout << "Operator =\t\t " << this->type << "\t\t called" << std::endl;
	return (*this);
}