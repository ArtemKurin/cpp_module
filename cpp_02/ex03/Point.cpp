#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{

}

Point::Point(const Fixed &fixedX, const Fixed &fixedY) : x(fixedX), y(fixedY)
{
	
}

Point::Point(const Point &other) : x(other.getX()), y(other.getY())
{

}

Point::~Point()
{
	
}

float	Point::getX(void) const
{
	return (this->x.toFloat());
}

float	Point::getY(void) const
{
	return (this->y.toFloat());
}

Point &Point::operator= (const Point &other)
{
	(void)other;
	return (*this);
}

std::ostream &operator<<(std::ostream &out, const Point &other)
{
	out << "(";
	out << other.getX();
	out << ",";
	out << other.getY();
	out << ")";
	return (out);
}