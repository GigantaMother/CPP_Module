#include "Fixed.hpp"

int main(void)
{
	{
		std::cout << "________________" << std::endl;
		Fixed a;
		Fixed b(a);
		Fixed c;
		c = b;
		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;
		std::cout << "________________" << std::endl;
	}
	{
		std::cout << "________________" << std::endl;
		Fixed a;
		a.setRawBits(42);
		std::cout << a.getRawBits() << std::endl;
		Fixed b;
		b = a;
		std::cout << b.getRawBits() << std::endl;
		std::cout << "________________" << std::endl;
	}
	return (0);
}
