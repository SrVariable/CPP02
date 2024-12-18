#include "Point.hpp"

int main()
{
	Point a(0, 0);
    Point b(3, 2);
    Point c(1, 5);

	Fixed maxX = Fixed::max(a.getX(), b.getX());
	maxX = Fixed::max(maxX, c.getX());

	Fixed maxY = Fixed::max(a.getY(), b.getY());
	maxY = Fixed::max(maxY, c.getY());

	std::cerr << maxX << std::endl;
	std::cerr << maxY << std::endl;


	Fixed minX = Fixed::min(a.getX(), b.getX());
	minX = Fixed::min(minX, c.getX());

	Fixed minY = Fixed::min(a.getY(), b.getY());
	minY = Fixed::min(minY, c.getY());

	std::cerr << minX << std::endl;
	std::cerr << minY << std::endl;

	for (Fixed i = minX; i <= maxX; ++i)
	{
		for (Fixed j = minY; j <= maxY; ++j)
		{
			Point p(i.toFloat(), j.toFloat());
			if (bsp(a, b, c, p))
				std::cerr << "\033[33m";
			else
				std::cerr << "\033[31m";
			std::cerr << p << std::endl;
			std::cerr << "\033[0m";
		}
	}

	return (0);
}
