#include "Fixed.hpp"

int main(void)
{
	{
		std::cout << "________________" << std::endl;
		Fixed a;
		Fixed const b(10);
		Fixed const c(42.42f);
		Fixed const d(b);
		a = Fixed(1234.4321f);
		std::cout << "_______" << std::endl;
		std::cout << "a is " << std::setw(8) << a << std::endl;
		std::cout << "b is " << std::setw(8) << b << std::endl;
		std::cout << "c is " << std::setw(8) << c << std::endl;
		std::cout << "d is " << std::setw(8) << d << std::endl;
		std::cout << "_______" << std::endl;
		std::cout << "a is " << std::setw(8) << a.toFloat() << " as float" << std::endl;
		std::cout << "b is " << std::setw(8) << b.toFloat() << " as float" << std::endl;
		std::cout << "c is " << std::setw(8) << c.toFloat() << " as float" << std::endl;
		std::cout << "d is " << std::setw(8) << d.toFloat() << " as float" << std::endl;
		std::cout << "_______" << std::endl;
		std::cout << "a is " << std::setw(8) << a.toInt() << " as integer" << std::endl;
		std::cout << "b is " << std::setw(8) << b.toInt() << " as integer" << std::endl;
		std::cout << "c is " << std::setw(8) << c.toInt() << " as integer" << std::endl;
		std::cout << "d is " << std::setw(8) << d.toInt() << " as integer" << std::endl;
		std::cout << "________________" << std::endl;
	}

	return (0);
}
