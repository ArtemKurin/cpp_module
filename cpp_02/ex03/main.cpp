#include "Point.hpp"

int	main(void)
{
	Fixed const	x11(-3);
	Fixed const	x12(3);
	Fixed const	x13(0);
	Fixed const	y11(5);
	Fixed const	y12(0);
	Fixed const	y13(-5);


	Point	point1(x11, y11);
	Point	point2(x12, y12);
	Point	point3(x13, y13);

	for (int x = 0; x <= 3; x++)
	{
		for (int y = 0; y <= 3; y++)
		{
			Fixed const	findX(x);
			Fixed const	findY(y);
			Point	findPoint(findX, findY);
			std::cout << "Point x = " << findX.toFloat() << ", y = " << findY.toFloat() << "\t\t[res = " << bsp(point1, point2, point3, findPoint) << "]"<< std::endl;
		}
	}
	return (1);
}