#include "Fixed.hpp"

void	defaultTest(void)
{
	std::cerr << "Default Test" << std::endl;
	std::cerr << "===========================" << std::endl;

	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cerr << a << std::endl;
	std::cerr << ++a << std::endl;

	std::cerr << a << std::endl;
	std::cerr << a++ << std::endl;
	std::cerr << a << std::endl;

	std::cerr << b << std::endl;
	std::cerr << Fixed::max( a, b ) << std::endl;
	std::cerr << "===========================" << std::endl;
}

void	myTest1(void)
{
	std::cerr << "Test 1" << std::endl;
	std::cerr << "===========================" << std::endl;

	Fixed a;

	std::cerr << a << std::endl;

	a = 5;
	std::cerr << a << std::endl;

	a = 4.59f;
	std::cerr << a << std::endl;

	std::cerr << (a < 5) << std::endl;
	std::cerr << (a == 4.59f) << std::endl;
	std::cerr << (a > 100) << std::endl;

	a = a * 5;
	std::cerr << a << std::endl;

	a = a / 5.0f;
	std::cerr << a << std::endl;
	std::cerr << (a == 4.59f) << std::endl;
	std::cerr << "===========================" << std::endl;
}

void	myTest2(void)
{
	std::cerr << "Test 2" << std::endl;
	std::cerr << "===========================" << std::endl;
	Fixed a(369.147f);
	Fixed b(1238.1f);

	std::cerr << a << std::endl;

	std::cerr << (a < 5) << std::endl;
	std::cerr << (a == 4.59f) << std::endl;
	std::cerr << (a > 100) << std::endl;

	a = a / b;
	std::cerr << a << std::endl;

	a = a * 5;
	std::cerr << a << std::endl;
	std::cerr << (a == 4.59f) << std::endl;
	std::cerr << "===========================" << std::endl;
}

int main()
{
	defaultTest();
	myTest1();
	myTest2();

	return 0;
}
