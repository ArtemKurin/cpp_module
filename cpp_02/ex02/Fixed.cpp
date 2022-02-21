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
	this->num = other.getRawBits();	
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

Fixed	&Fixed::operator= (const Fixed &other)
{
	std::cout << "Assignation operator called" << std::endl;
	this->num = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
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

bool	Fixed::operator> (const Fixed &fixed) const
{
	return (this->num > fixed.num);
}

bool	Fixed::operator< (const Fixed &fixed) const
{
	return (this->num < fixed.num);
}

bool	Fixed::operator>= (const Fixed &fixed) const
{
	return (this->num >= fixed.num);
}

bool	Fixed::operator<= (const Fixed &fixed) const
{
	return (this->num <= fixed.num);
}

bool	Fixed::operator== (const Fixed &fixed) const
{
	return (this->num == fixed.num);
}

bool	Fixed::operator!= (const Fixed &fixed) const
{
	return (this->num != fixed.num);
}

Fixed	Fixed::operator+ (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator- (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator* (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/ (const Fixed &fixed) const
{
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++ (void)
{
	++(this->num);
	return (*this);
}
Fixed	Fixed::operator++ (int)
{
	Fixed tmp(*this);

	(this->num)++;
	return (tmp);
}

Fixed	&Fixed::operator-- (void)
{
	--(this->num);
	return (*this);
}

Fixed	Fixed::operator-- (int)
{
	Fixed tmp(*this);

	(this->num)--;
	return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() < b.getRawBits())
		return (a);
	else
		return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a.getRawBits() > b.getRawBits())
		return (a);
	else
		return (b);
}
