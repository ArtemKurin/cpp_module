#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "Constructor " << this->type << " called" << std::endl;
}

WrongCat::WrongCat(WrongCat const &other)
{
	std::cout << "Constructor copy " << this->type << " called" << std::endl;
	this->type = other.type;
}

WrongCat::~WrongCat()
{
	std::cout << "Destructor " << this->type << " called" << std::endl;
}

void	WrongCat::makeSound() const
{
	std::cout << "Make sound "  << this->type << " : MEOW" << std::endl;
}

WrongCat 		&WrongCat::operator= (const WrongCat &other)
{
	this->type = other.type;
	return (*this);
}