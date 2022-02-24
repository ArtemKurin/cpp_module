#include "Point.hpp"

bool	bsp(const Point a, const Point b, const Point c, const Point point)
{
	float i = (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
	float j = (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
	float k = (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());
	// std::cout << " (ax = " << a.getX() << " ay = " << a.getY() << ") (bx = " << b.getX() << " by = " << b.getY() << ") (cx = " << c.getX() << " cy = " << c.getX() << ") (pox = " << point.getX() << " poy = " << point.getX() << ") (i = " << i << ") (j = " << j << ") (k = " << k << ") ";
	return (i > 0.0 && j > 0.0 && k > 0.0) || (i < 0.0 && j < 0.0 && k < 0.0);
}