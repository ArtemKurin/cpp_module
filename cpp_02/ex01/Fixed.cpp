#include "Fixed.hpp"

const int Fixed::raw = 8;

Fixed::Fixed() : num(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int const val) : num(val << raw)
{
	std::cout << "Int constructor called\n";
}

Fixed::Fixed(float const val) : num(roundf(val * (1 << raw)))
{
	std::cout << "Float constructor called\n";
}

Fixed::Fixed(const Fixed &other)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= (const Fixed &other)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->num = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	return (this->num);
}

void	Fixed::setRawBits(int const nNum)
{
	this->num = nNum;
}

float	Fixed::toFloat(void) const
{
	return ((float)this->num / (1 << raw));
}

int	Fixed::toInt(void) const
{
	return ((int)(roundf((float)this->num / (1 << raw))));
}

std::ostream &operator<< (std::ostream &out, const Fixed &value)
{
	out << value.toFloat();
	return (out);
}
