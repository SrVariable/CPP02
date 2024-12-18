#include "Fixed.hpp"

void	defaultTest(void)
{
	std::cerr << "Default Test" << std::endl;
	std::cerr << "===========================" << std::endl;
	Fixed a;
	Fixed b(a);
	Fixed c;

	c = b;

	std::cerr << a.getRawBits() << std::endl;
	std::cerr << b.getRawBits() << std::endl;
	std::cerr << c.getRawBits() << std::endl;
	std::cerr << "===========================" << std::endl;
}

void	myTest1()
{
	std::cerr << "Test 1" << std::endl;
	std::cerr << "===========================" << std::endl;

	Fixed a;
	a.setRawBits(123818);
	std::cerr << a.getRawBits() << std::endl;

	a.setRawBits(0);
	std::cerr << a.getRawBits() << std::endl;

	a.setRawBits(-1723);
	std::cerr << a.getRawBits() << std::endl;
	std::cerr << "===========================" << std::endl;
}

int	main()
{
	defaultTest();
	myTest1();
	return (0);
}
