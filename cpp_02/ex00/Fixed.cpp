#include "Fixed.hpp"

const int Fixed::raw = 8;

Fixed::Fixed()
{
	std::cout << "Default constructor called" << std::endl;
	this->num = 0;
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	this->num = other.getRawBits();	
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&operator= (const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->num = other->other.getRawBits();
	return (*this);
}

void	Fixed::getRawBits(void)
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->num);
}

void	Fixed::setRawBits(int const nNum)
{
	this->num = nNum;
}
