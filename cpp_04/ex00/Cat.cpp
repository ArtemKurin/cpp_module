#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Constructor " << this->type << " called" << std::endl;
}

Cat::Cat(Cat const &other)
{
	std::cout << "Constructor copy " << this->type << " called" << std::endl;
	this->type = other.type;
}

Cat::~Cat()
{
	std::cout << "Destructor " << this->type << " called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Make sound "  << this->type << " : MEOW" << std::endl;
}

Cat 		&Cat::operator= (const Cat &other)
{
	this->type = other.type;
	return (*this);
}