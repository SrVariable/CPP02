#include "Fixed.hpp"

void	defaultTest(void)
{
	std::cerr << "Default Test" << std::endl;
	std::cerr << "===========================" << std::endl;

	Fixed a;
	Fixed const b(10);
	Fixed const c(42.42f);
	Fixed const d(b);

	a = Fixed( 1234.4321f );

	std::cerr << "a is " << a << std::endl;
	std::cerr << "b is " << b << std::endl;
	std::cerr << "c is " << c << std::endl;
	std::cerr << "d is " << d << std::endl;

	std::cerr << "a is " << a.toInt() << " as integer" << std::endl;
	std::cerr << "b is " << b.toInt() << " as integer" << std::endl;
	std::cerr << "c is " << c.toInt() << " as integer" << std::endl;
	std::cerr << "d is " << d.toInt() << " as integer" << std::endl;
	std::cerr << "===========================" << std::endl;
}

void	myTest1(void)
{
	std::cerr << "Test 1" << std::endl;
	std::cerr << "===========================" << std::endl;

	Fixed a(71823);
	Fixed b(2147483647);

	std::cerr << a.toFloat() << std::endl;
	std::cerr << b.toFloat() << std::endl;

	std::cerr << a.toInt() << std::endl;
	std::cerr << b.toInt() << std::endl;

	b = a;
	std::cerr << a.toFloat() << std::endl;
	std::cerr << b.toFloat() << std::endl;

	std::cerr << a.toInt() << std::endl;
	std::cerr << b.toInt() << std::endl;

	a = -2147483647;
	std::cerr << a.toFloat() << std::endl;
	std::cerr << b.toFloat() << std::endl;

	std::cerr << a.toInt() << std::endl;
	std::cerr << b.toInt() << std::endl;

	int x = 12891923;
	b = x;
	std::cerr << x << std::endl;
	std::cerr << b << std::endl;
	std::cerr << b.toInt() << std::endl;
	std::cerr << b.toFloat() << std::endl;

	int y = -12891923;
	Fixed c(y);
	std::cerr << y << std::endl;
	std::cerr << c << std::endl;
	std::cerr << c.toInt() << std::endl;
	std::cerr << c.toFloat() << std::endl;
	std::cerr << "===========================" << std::endl;
}

int main()
{
	defaultTest();
	myTest1();
	return (0);
}
