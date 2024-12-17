#include "Point.hpp"

int main()
{
	Point a(0, 0);
    Point b(2, 2);
    Point c(2, 5);
    Point p(1, 1);

	std::cout << bsp(a, b, c, p) << std::endl;

	return (0);
}
