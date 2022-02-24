#include "Point.hpp"

Point::Point(void) : x(0), y(0)
{

}

Point::Point(float const x, float const y) : x(x), y(y)
{
	
}

Point::Point(const Point &other) : x(other.x), y(other.y)
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